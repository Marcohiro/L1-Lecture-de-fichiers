#include <stdexcept>
/** @file **/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
int volumeTotal = 0;
vector<int>t(12);
int volume;
    ifstream fichier("volumes_d_eau_distribues.csv");
    string entete;
    getline(fichier, entete);
    cout << "Entête: " << entete << endl;
    string mois;
    string volume_str;
    if (fichier.good()){
    for(int i = 0; i<t.size(); i++){
    getline(fichier, mois, ';');
    getline(fichier, volume_str);
     if ( volume_str.size() > 0 and volume_str[volume_str.length()-1]) //== '\r' )
        volume_str.resize(volume_str.length() - 1);
         // Conversion du volume en entier
         istringstream(volume_str) >> volume;
         t[i] = volume;
          volumeTotal = volumeTotal + t[i];
          cout << t[i] << endl;
           }
          }
        fichier.close();
        cout << endl;
        if(volumeTotal != 191601800){
        cout << " Erreur, le volumeTotal ne correspond pas ! " << endl;
        }else{
        cout << volumeTotal << endl;
        }
    return 0;
}
