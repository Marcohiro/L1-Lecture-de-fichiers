#include <stdexcept>
/** @file **/
#include <iostream>
#include "tableau.h"
#include <vector>
using namespace std;

int main() {
int lignes;
string nom_fichier;
vector<vector<int>>tableau;
tableau = vector<vector<int>> (lignes);
vector<int> col;
col = vector<int>(lignes);
int volumeTotal = 0;
int volumeMoyen;
int i;
int diviseur;
cout << "Saisir le nom de fichier" << endl;
tableau = litTableauInt("volumes.txt", lignes);
cout << endl;
cout << " Saisir le nombre de lignes " << endl;
cin >> lignes;
cout << " Saisir la colonne a extraire " << endl;
cin >> i;
col = colonne(tableau, i);
volumeMoyen = moyenne(col);
cout << " Le volume moyen d'eau distribue a Paris est de " << volumeMoyen << " litres " << endl;
return 0;
}
