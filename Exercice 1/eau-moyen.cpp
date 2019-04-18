#include <stdexcept>
/** @file **/
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){
ifstream flux;
flux.open("volumes.txt");
vector<int>t;
t = vector<int>(12);
int volumeMensuel;
int volumeMoyen;
int volumeTotal;
volumeTotal = 0;
int mois;
if(flux.good()){
    for(int i = 0; i<12; i++){
            flux >> mois >> volumeMensuel;
            volumeTotal = volumeTotal + volumeMensuel;
            volumeMoyen = volumeTotal/12;
        }
}
else{
       cout << "fail"; //teste si le programme n'arrive pas à ouvrir le fichier
}
flux.close();
if(volumeMoyen != 15966816)  //teste la fonction
    cout << "Erreur, le volume moyen ne correspond pas!" << endl;
cout << "Le volume moyen d'eau distribue en 2011 est " << volumeMoyen << " litres " << endl;
}

//il faut trouver 15966816,66666667

