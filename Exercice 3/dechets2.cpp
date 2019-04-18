#include <stdexcept>
/** @file **/
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int mois;
int volumeMensuel;
int Total;
int Maximum;
int positionMaximum;

vector<vector<int>> litTableauInt(string nom_fichier, int nb_colonnes) {
ifstream flux;
flux.open("tonnages.txt");
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
vector<int>c (20);
for(int i = 0; i<t.size(); i++){
 c[i] = t[i][0];
 }
 return c;
}

int total(vector<int> t) {
for(int j =0; j<t.size(); j++){
 Total = Total + t[j];
 }
return Total;
}

int maximum(vector<int> t) {
 for(int i = 0; i<t.size(); i++){
 Maximum = t[0];
  if(t[i] > Maximum){
  Maximum = t[i];
  }
 }
 return Maximum;
}

int maxPosition(vector<int>t){
if(t.size() == 0){
 positionMaximum = -1;
}else{
 for(int i = 0; i<t.size(); i++){
  if(t[i]>positionMaximum){
   positionMaximum = i;
   }
  }
 }
 return positionMaximum;
}


int main(){
vector<vector<int>>tableau;
tableau = vector<vector<int>> (20);
int tonnageMax;
int Janvier, Fevrier, Mars, Avril, Mai, Juin, Juillet, Aout, Septembre, Octobre, Novembre, Decembre;
int arrondissement;
int arrP;
int lignes;
int i;
vector<int> col;
col = vector<int>(20);

cout << " Saisir le nombre de lignes" << endl;
cin >> lignes;
tableau = litTableauInt("tonnages.txt", lignes);
cout << " Saisir la colonne a extraire " << endl;
cin >> i;
col = colonne(tableau, i);
tonnageMax = total(col);
arrP = maximum(col);
arrondissement = tableau[arrP][1];
cout << " Le plus grand tonnage de dechets ramasses a ete de " << tonnageMax << " dans le " << arrondissement << " . " << endl;
return 0;
}
