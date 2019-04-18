#include <stdexcept>
/** @file **/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
int volumeMax;
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
     if ( volume_str.size() > 0 and volume_str[volume_str.length()-1]== '\r' )
        volume_str.resize(volume_str.length() - 1);
         // Conversion du volume en entier
         istringstream(volume_str) >> volume;
         t[i] = volume;
         t[0] = volumeMax;
         if(volumeMax < t[i]){
          volumeMax = t[i];
            }
           }
          }
        fichier.close();
        cout << endl;
 if(volumeMax != 17711200){
        cout << " Erreur,le volume max ne correspond pas !" << endl;
        }else{
         cout << volumeMax << endl;
       }
    return 0;
}
