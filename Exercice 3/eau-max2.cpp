#include <stdexcept>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

//Variables utilisées

int volumeMensuel;
int volumeMoyen;
int volumeMaximum;
int positionMax;
int mois;
int volumeTotal = 0;
int lignes;
int position;
int positionmaximum = 0;

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

int volumeMax(vector<int>t){
 for(int i = 0; i<t.size(); i++){
 volumeMaximum = t[0];
  if(t[i] > volumeMaximum){
  volumeMaximum = t[i];
  }
 }
 return volumeMaximum;
}

int maxPosition(vector<int>t){
if(t.size() == 0){
 positionmaximum = -1;
}else{
 for(int i = 0; i<t.size(); i++){
  if(t[i]>positionmaximum){
   positionmaximum = i;
   }
  }
}
return positionmaximum;
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
cout << endl;
volumeMaximum = volumeMax(col);
position = maxPosition(col);
mois = tableau[position][1];
   if( volumeMaximum != 17711200 && positionMax != 5) //teste la fonction
   cout << "Erreur, le volume maximum ne correspond pas!" << endl;
    else{
cout <<" Le volume maximum d'eau distribute a Paris est de " << volumeMaximum << " litres  en " << mois << " . "  << endl;
}
return 0;
}




