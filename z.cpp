#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream fichier;
    fichier.open("entree.txt", ios::in);
    if (fichier.is_open()) {
      string ligne;
      while( getline(fichier, ligne)) {
        cout << ligne << "\n";
      }
      fichier.close();
    }

}
