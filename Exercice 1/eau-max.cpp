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
int volumeMax;
int mois;
if(flux.good()){
    for(int i = 0; i<12; i++){
            flux >> mois >> volumeMensuel;
           volumeMax = volumeMensuel;
           if(volumeMensuel > volumeMax)
            volumeMax = volumeMensuel;
    }
}
else{
       cout << "fail"; //teste si le programme n'arrive pas à ouvrir le fichier
}
flux.close();
if(volumeMax != 17711200)        //teste la fonction
    cout << "Erreur, le volume ne correspond pas!" << endl;
cout << "Le volume max d'eau distribue en 2011 a ete en " << mois << " dont le volume est " << volumeMax << " litres " << endl;
}
