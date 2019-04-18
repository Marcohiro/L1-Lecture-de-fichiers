#include <stdexcept>
#include <fstream>
#include <iostream>
#include <vector>
#include <tableau.h>

using namespace std;

int main()
{
int lignes;
string nom_fichier;
vector<vector<int>>tableau;
tableau = vector<vector<int>>(lignes);
vector<int> col;
int i;
int volumeTotal;
cout << "Saisir le nombre de lignes" << endl;
cout << endl;
cin >> lignes;
tableau = litTableauInt("volumes.txt", lignes);
cout << endl;
cout << "Saisir la colonne à extraire" << endl;
cout << endl;
cin >> i;
cout << endl;
col = colonne(tableau, i);
cout << endl;
volumeTotal = total(col);
cout << " Le volume total d'eau distribué en 2011 a Paris est de " << volumeTotal << " Litres . " << endl;
return 0;
}
