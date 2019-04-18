#include <stdexcept>
#include <fstream>
#include <iostream>
#include <vector>
#include <tableau.h>
using namespace std;

int main(){
vector<vector<int>>tableau;
tableau = vector<vector<int>> (20);
int tonnageMax;
int Janvier, Fevrier, Mars, Avril, Mai, Juin, Juillet, Aout, Septembre, Octobre, Novembre, Decembre;
int arrondissement;
int arrP;
int lignes;
int i;
vector<int> col;
col = vector<int>(20);

cout << " Saisir le nombre de lignes" << endl;
cin >> lignes;
tableau = litTableauInt("tonnages.txt", lignes);
cout << " Saisir la colonne a extraire " << endl;
cin >> i;
col = colonne(tableau, i);
tonnageMax = total(col);
arrP = maximum(col);
arrondissement = tableau[arrP][1];
cout << " Le plus grand tonnage de dechets ramasses a ete de " << tonnageMax << " dans le " << arrondissement << " . " << endl;
return 0;
}
