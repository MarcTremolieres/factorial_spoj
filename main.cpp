#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<int> nombres;
    string ligne;
    while( getline(cin, ligne)) {
        if (ligne == "") {
            break;
        }
        nombres.push_back(stoi(ligne));
      }
    int nombre, z, diviseur;
    for (int index = 1; index < nombres[0] + 1; index++) {
    nombre = nombres[index];
    int z = 0;
    int diviseur = 5;
    while ( diviseur <= nombre) {
        z += nombre / diviseur;
        diviseur *= 5;
    }
    cout << z << "\n";

    }
}
