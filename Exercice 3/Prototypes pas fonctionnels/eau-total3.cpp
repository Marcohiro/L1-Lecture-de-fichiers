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
int i;
cout << "Saisir le nom de fichier" << endl;
cout << endl;
cin >> nom_fichier;
cout << endl;
tableau = litTableauInt(nom_fichier, lignes);

}
