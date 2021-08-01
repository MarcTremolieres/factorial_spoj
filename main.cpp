#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    fstream fichier;
    fichier.open("entree.txt", ios::in);
    vector<int> nombres;
    if (fichier.is_open()) {
      string ligne;
      while( getline(fichier, ligne)) {
        nombres.push_back(stoi(ligne));
      }
      fichier.close();
      int nombre, z, diviseur;
      for (int index = 1; index < nombres[0] + 1; index++) {
        nombre = nombres[index];
        z = 0;
        diviseur = 5;
        while ( diviseur <= nombre) {
          z += nombre / diviseur;
          diviseur *= 5;
        }
      cout << z << "\n";
      }
    }

}
