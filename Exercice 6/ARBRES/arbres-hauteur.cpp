#include <stdexcept>
/** @file **/
#include <iostream>
#include <sstream>
#include <fstream>
//#include "tableau.h"
//#include "tableaucsv.h"
#include <vector>
using namespace std;

int volumeMaximum;
int positionMaximum;
string nom_fichier;
int maxi;

vector<vector<string>> litTableauCSV(string nom_fichier, int nb_colonnes) {
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
        if ( v.size() > 0 and v[v.length()-1])//== '\r' )
            v.resize(v.length() - 1);
        ligne_tableau.push_back(v);

        if ( fichier )
            tableau.push_back(ligne_tableau);
    }
    return tableau;
}

vector<string> colonne(vector<vector<string>> t, int i) {
vector<string> c;
c = vector<string> (t.size());
for(int j = 0; j<t.size(); j++){
 c[j] = t[j][i];
 }
 return c;
}

vector<int> conversionInt(vector<string> t) {
vector<int> entiers;
entiers = vector<int> (t.size());
for(int i =0; i<t.size(); i++){
  istringstream(t[i]) >> entiers[i];
 }
 return entiers;
}

int maximum(vector<int> t) {
 for(int i = 0; i<t.size(); i++){
 maxi = t[0];
  if(t[i] > maxi){
  maxi = t[i];
  }
 }
 return maxi;
}

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

int main() {
vector<vector<string>> fichier;
vector<string>col;
vector<int> entiers;
vector<int> doubles;
int dossier;
int lignes;
int i;
int taillemaximale;
int position;
int agemaximal;
vector<int> age;
vector<int> taille;

fichier = litTableauCSV("arbresremarquablesparis2011", lignes);
cout << "Saisir la colonne du tableau à extraire" << endl;
cout << endl;
cin >> i;
col = colonne(fichier, i);
taille = conversionInt(col);
taillemaximale = maximum(taille);
position = maxPosition(taille);
    cout << " Le nom de l'espèce de l'arbre le plus grand de Paris est " << fichier[position][2] << " " << fichier[position][3] << " . " << endl;

age = conversionInt(col);
agemaximal = maximum(age);
position = maxPosition(age);
 cout << " Le nom de l'arbe le plus age de Paris est " << fichier[position][2] << " " << fichier[position][3] << " . " << endl;
return 0;
}
