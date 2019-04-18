#include <stdexcept>
/** @file **/
#include <fstream>
#include <vector>
#include "tableau.h"
#include <iostream>

//variables globales

int volumeTotal;
int diviseur;
int volumeMaximum;
int positionMaximum;
int volumeMensuel;
int mois;
int lignes;

class A {

public:

/** Moyenne d'un tableau
 * @param t un tableau d'entiers
 * @result la moyenne de ces entiers
 **/

int moyenne(std::vector<int> t) {
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

int total(std::vector<int> t) {
    int Total = 0;
for(int j =0; j<t.size(); j++){
 Total = Total + t[j];
 }
return Total;
}

/** Max d'un tableau
 * @param t un tableau d'entiers
 * @result le plus grand de ces entiers;
    comportement non défini si le tableau est vide
 **/

int maximum(std::vector<int> t) {
 for(int i = 0; i<t.size(); i++){
 volumeMaximum = t[0];
  if(t[i] > maximum){
  maximum = t[i];
  }
 }
 return maximum;
}

/** Position du max d'un tableau
 * @param t un tableau d'entiers
 * @result la position du plus grand de ces entiers;
    le premier s'il y en a plusieurs;
    -1 si le tableau est vide
 **/

int maxPosition(std::vector<int>t){
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


/** Construction d'un tableau 2D d'entiers lu depuis un fichier
 * @param fichier le nom d'un fichier contenant un nombre fixe
  * d'entiers par lignes, séparés par des espaces
 * @param nb_colonnes le nombre de colonnes du fichier
 * @return un tableau d'entiers à deux dimensions
 **/

std::vector<std::vector<int>> litTableauInt(std::string nom_fichier, int nb_colonnes) {
std::ifstream flux;
flux.open("volumes.txt");
std::vector<std::vector<int>>t (nb_colonnes);
if(flux.good()){
    for(int i = 0; i<t.size(); i++)t[i] = std::vector<int> (2);
     for(int j = 0; j<t.size(); j++){
       flux >> mois;
       t[j][1] = mois;
      std::cout << t[j][1] << std::endl;
       for(int c = 0; c<1; c++){
       flux >> volumeMensuel;
           t[j][c] = volumeMensuel;
          std::cout << t[j][c] << std::endl;
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

std::vector<int> colonne(std::vector<std::vector<int>> t, int i) {
std::vector<int>c (lignes);
for(int i = 0; i<t.size(); i++){
 c[i] = t[i][0];
 }
 return c;
}

};
