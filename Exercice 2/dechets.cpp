#include <stdexcept>
/** @file **/
#include <fstream>
#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

int main(){
ifstream flux;
flux.open("tonnages.txt");
vector<int>t;
t = vector<int>(20);
vector<int>a;
a = vector<int>(20);
int tonnageMax;
int Janvier, Fevrier, Mars, Avril, Mai, Juin, Juillet, Aout, Septembre, Octobre, Novembre, Decembre;
int arrondissement;
int arrP;
if(flux.good()){
for(int i = 0; i<20; i++){
            flux >> arrondissement >> Janvier >> Fevrier >> Mars >> Avril >> Mai >> Juin >> Juillet >> Aout >> Septembre >> Octobre >> Novembre >> Decembre;
           t[i] = Janvier + Fevrier + Mars + Avril + Mai + Juin + Juillet + Aout + Septembre + Octobre + Novembre + Decembre; //Calcul du tonnage annuel
           a[i] = arrondissement; //affiche l'arrondissement
           //cout << a[i] << " " << t[i] << endl;  //Affiche les valeurs annuelles des tonnages par arrondissement
           tonnageMax = t[0];
           arrP = a[0];
           for(int j = 0; j<20; j++){
           while(tonnageMax<t[j]){ //Détermine quel est le plus grand tonnage
           tonnageMax = t[j];
           arrP = a[j];
           }
           }
    }
}
else{
      cout << "fail";  //teste si le programme n'arrive pas à ouvrir le fichier
}
flux.close();
if(tonnageMax != 10163 || arrP != 75015){ //teste la fonction
cout << "Le tonnage max et/ou l'arrondissement ne correspond pas!" << endl;
}
else{
cout << "Le tonnage max de dechets ramasses en 2011 a ete de " << tonnageMax << " dans le " << arrP << endl;
}
}
