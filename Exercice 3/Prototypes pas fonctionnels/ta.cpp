#include <stdexcept>
/** @file **/
#include <fstream>
#include "tableau-donnees.h"

/** Moyenne d'un tableau
 * @param t un tableau d'entiers
 * @result la moyenne de ces entiers
 **/

int moyenne(vector<int> t) {
for(int j =0; j<t.size(); j++){
 volumeTotal = volumeTotal + t[j];
 diviseur = diviseur + 1;
 }
return volumeTotal/diviseur;
}

/** Total d'un tableau
 * @param t un tableau d'entiers
 * @result la somme de ces entiers
 **/

int total(vector<int> t) {
for(int j =0; j<t.size(); j++){
 volumeTotal = volumeTotal + t[j];
 }
return volumeTotal;
}

/** Max d'un tableau
 * @param t un tableau d'entiers
 * @result le plus grand de ces entiers;
    comportement non défini si le tableau est vide
 **/

int max(vector<int> t) {
int volumeMax(vector<int>t){
 for(int i = 0; i<t.size(); i++){
 volumeMaximum = t[0];
  if(t[i] > volumeMaximum){
  volumeMaximum = t[i];
  }
 }
 return volumeMaximum;
}
}

/** Position du max d'un tableau
 * @param t un tableau d'entiers
 * @result la position du plus grand de ces entiers;
    le premier s'il y en a plusieurs;
    -1 si le tableau est vide
 **/

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


/** Construction d'un tableau 2D d'entiers lu depuis un fichier
 * @param fichier le nom d'un fichier contenant un nombre fixe
  * d'entiers par lignes, séparés par des espaces
 * @param nb_colonnes le nombre de colonnes du fichier
 * @return un tableau d'entiers à deux dimensions
 **/

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

/** Extraction d'une colonne d'un tableau d'entiers
 * @param t un tableau 2D d'entiers
 * @param i un numéro de colonne
 * @return la colonne i, représentée par un vecteur d'entiers
 **/

vector<int> colonne(vector<vector<int>> t, int i) {
vector<int>c (lignes);
for(int i = 0; i<t.size(); i++){
 c[i] = t[i][0];
 }
 return c;
}
