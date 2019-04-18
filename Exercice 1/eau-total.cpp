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
int volumeTotal;
volumeTotal = 0;
int mois;
if(flux.good()){
    for(int i = 0; i<12; i++){
            flux >> mois >> volumeMensuel;
            volumeTotal = volumeTotal + volumeMensuel;
            //cout << mois << " " << volumeMensuel << endl; //Affiche le volume d'eau associé au mois.
        }
}
else{
       cout << "fail"; //teste si le programme n'arrive pas à ouvrir le fichier
}
flux.close();
if(volumeTotal != 191601800) //teste la fonction
    cout << "Erreur, le volumeTotal ne correspond pas!" << endl;
cout << "Le volume total d'eau distribue en 2011 est " << volumeTotal << " litres " << endl;
}



