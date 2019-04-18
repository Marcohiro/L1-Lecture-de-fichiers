#include <stdexcept>
/** @file **/
#include <iostream>
#include <fstream>
#include <sstream>
#include "tableau-donnees-csv.h"
#include <vector>

/** Affiche le contenu d'un tableau de chaines a deux dimensions
* @param tableau un tableau a deux dimensions
**/

void afficheTableau(vector<vector<string>> tableau) {
vector<vector<int> tableau;
vector<vector<int> t;
t = vector<vector<int> (100);
for(int i =0; i<t.size(); i++){
 for(int j = 0; j<t.size(); j++){
  tableau = t[i][j];
  }
 }
 //return tableau;
}

/** Construction d'un tableau 2D de chaines lu depuis un fichier CSV
* @param fichier le nom d'un fichier contenant un nombre fixe
* d'entiers par lignes, seeparees par des espaces
* @param nb_colonnes le nombre de colonnes du fichier
* @return un tableau d'entiers a deux dimensions
**/

vector<vector<string>> litTableauCSV(string nom_fichier, int nb_colonnes) { // Auteurs: les profs!
    ifstream fichier(nom_fichier);
    vector<vector<string>> tableau;
    string ligne;
    // Lecture de l'entête
    getline(fichier, ligne);
    while (fichier) {
        vector<string> ligne_tableau;
        string v;

        // Lecture des valeurs de la ligne sauf la dernière
        for ( int i = 0; i < nb_colonnes-1; i++ ) {
            getline(fichier, v, ';');
            ligne_tableau.push_back(v);
        }

        // Lecture de la dernière valeur
        getline(fichier, v);
        // Gestion des fichier Windows sous Linux
        if ( v.size() > 0 and v[v.length()-1] == '\r' )
            v.resize(v.length() - 1);
        ligne_tableau.push_back(v);

        if ( fichier )
            tableau.push_back(ligne_tableau);
    }
    return tableau;
}

/** Construction d'un tableau 2D de chaines lu depuis un fichier CSV
* @param fichier le nom d'un fichier contenant un nombre fixe
* d'entiers par lignes, separees par des espaces
* @return un tableau d'entiers a deux dimensions
**/

vector<vector<string>> litTableauCSV(string nom_fichier) { // Auteurs: les profs!
    ifstream fichier(nom_fichier);
    vector<vector<string>> tableau;
    string ligne;
    // Lecture de l'entête
    getline(fichier, ligne);
    while ( getline(fichier,ligne) ) {
        istringstream sl(ligne);
        vector<string> ligne_tableau;
        string v;
        while ( getline(sl, v, ';' )) {
            // Gestion des fichier Windows sous Linux
            if ( v.size() > 0 and v[v.length()-1] == '\r' )
                v.resize(v.length() - 1);
            ligne_tableau.push_back(v);
        }
        tableau.push_back(ligne_tableau);
    }
    return tableau;
}

/** Extraction d'une colonne d'un tableau 2D de chaines de caracteres
* @param t un tableau 2D de chaines de caracteres
* @param i un numero de colonne
* @return la colonne i, representee par un vecteur
**/

vector<string> colonne(vector<vector<string>> t, int i) {
vector<string> c;
c = vector<string> (t.size());
for(int j = 0; j<t.size(); j++){
 c[j] = t[j][i];
 }
 return c;
}

/** Conversion d'un vecteur de chaines de caracteres en vecteur d'entiers
* @param t un vecteur de chaines de caracteres
* @return le vecteur, converti en vecteur d'entiers
**/

vector<int> conversionInt(vector<string> t) {
vector<int> entiers;
tab = vector<int> (t.size());
for(int i =0; i<t.size(); i++){
  istringstream(t[i]) >> entiers[i];
 }
 return entiers;
}

/** Conversion d'un vecteur de chaines de caracteres en vecteur de doubles
* @param t un vecteur de chaines de caracteres
* @return le vecteur, converti en vecteur de doubles
**/

vector<double> conversionDouble(vector<string> t) {
vector<double> doubles;
tab = vector<double> (t.size());
for(int i =0; i<t.size(); i++){
  istringstream(t[i]) >> doubles[i];
 }
 return doubles;
}


/** Conversion en vecteur de valeurs de type T
* @param t un vecteur de chaines de caracteres
* @return le vecteur, converti en vecteur de T
**/

/*
template<class T>
vector<T> conversion(vector<string> t) {
?????
}*/

// Force l'instanciation des templates
template vector<int> conversion<int>(vector<string> t);
template vector<double> conversion<double>(vector<string> t);
