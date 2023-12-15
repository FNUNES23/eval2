#include <iostream>  
using namespace std;

int main () {

  cout << "********** Evaluation 2 **********" << endl;
    cout << endl;
    cout << "1 - Entrée dans le parking" << endl;
    cout << "2 - Nombre de places" << endl;
    cout << "3 - Sortie du parking" << endl;
    cout << "4 - Quitter" << endl;
    cout << endl;
    cout << endl;
    cout << "Saisir un nombre" << endl;

    int choix;

    cin >> choix;

    if (choix == 1) {
      cout << "vous avez choisi Entrée dans le parking";
    } else {
      if (choix == 2) {
        cout << "vous avez choisi Nombre de places";
      } else {
        if (choix == 3) {
          cout << "vous avez choisi Sortie du parking";
        } else {
          if (choix == 4) {
            cout << "vous avez choisi Quitter";
          } else {
            cout << "ERROR! Selectionnez 1 à 4";
          }
        }
      }
    }
  }