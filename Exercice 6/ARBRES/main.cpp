#include <stdexcept>
/** @file **/
#include <iostream>
#include <sstream>
#include <fstream>
#include "tableau.h"
#include "tableaucsv.h"
#include <vector>
using namespace std;

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
