
#include <stdexcept>
/** @file **/
#include <iostream>
#include "tableau-donnees.h"

using namespace std;

int main(){
int lignes;
int i;
string nom_fichier;
vector<vector<int>> tableau;
tableau = vector<vector<int>> (lignes);
vector<int> colonne;
colonne = vector<int>(lignes);
int volumeTotal;
cout << "Saisir le nom de fichier" << endl;
cin >> nom_fichier;
tableau = vector<vector<int>> litTableauInt( nom_fichier, int nb_colonnes);
cout << endl;
cout << "Saisir la colonne a extraire" << endl;
cin >> i;
colonne = vector<int> colonne(tableau, i);
cout << endl;
volumeTotal = total(vector<int> t);
cout << volumeTotal << endl;
return 0;
}
