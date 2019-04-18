#include <stdexcept>
#include <fstream>
#include <iostream>
#include <vector>
#include <tableau.h>
using namespace std;

int main(){
int i;
int lignes;
int volumeMaximum;
int position;
int mois;
vector<vector<int>> tableau;
tableau = vector<vector<int>> (lignes);
vector<int> col;
cout << "Saissir le nombre de lignes" << endl;
cout << endl;
cin >> lignes;
cout << endl;
tableau = litTableauInt("volumes.cpp", lignes);
cout << endl;
cout << "Saissir la colonne a extraire" << endl;
cout << endl;
cin >> i;
col = colonne(tableau, i);
cout << endl;
volumeMaximum = maximum(col);
position = maxPosition(col);
mois = tableau[position][1];
   if( volumeMaximum != 17711200 && position != 5) //teste la fonction
   cout << "Erreur, le volume maximum ne correspond pas!" << endl;
    else{
cout <<" Le volume maximum d'eau distribute a Paris est de " << volumeMaximum << " litres " << " en " << mois << " . "  << endl;
}
return 0;
}
