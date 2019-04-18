#include <stdexcept>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

//Variables utilisées

int volumeMensuel;
int mois;
int volumeTotal = 0;
int lignes;

vector<vector<int>> litTableauInt(string nom_fichier, int nb_colonnes) {
ifstream flux;
flux.open("volumes.txt");
vector<vector<int>>t (nb_colonnes);
if(flux.good()){
    for(int i = 0; i<t.size(); i++)t[i] = vector<int> (2);
     for(int j = 0; j<t.size(); j++){
       flux >> mois;
       t[j][1] = mois;
       cout << t[j][1] << endl;
       for(int c = 0; c<1; c++){
       flux >> volumeMensuel;
           t[j][c] = volumeMensuel;
           cout << t[j][c] << endl;
        }
     }
    }
    return t;
}

vector<int> colonne(vector<vector<int>> t, int i) {
vector<int>c (lignes);
for(int i = 0; i<t.size(); i++){
 c[i] = t[i][0];
 }
 return c;
}

int total(vector<int> t) {
for(int j =0; j<t.size(); j++){
 volumeTotal = volumeTotal + t[j];
 }
return volumeTotal;
}

int main(){
int i;
vector<vector<int>> tableau;
tableau = vector<vector<int>> (lignes);
vector<int> col;
cout << "Saissir le nombre de lignes" << endl;
cout << endl;
cin >> lignes;
cout << endl;
tableau = litTableauInt("volumes.cpp", lignes);
cout << endl;
cout << "Saissir la colonne a extraire" << endl;
cout << endl;
cin >> i;
col = colonne(tableau, i);
volumeTotal = total(col);
cout << endl;
if(volumeTotal != 191601800) //teste la fonction
cout << "Erreur, le volumeTotal ne correspond pas!" << endl;
else{
cout <<" Le volume total d'eau distribute a Paris est de " << volumeTotal << " litres. " << endl;
}
return 0;
}

