#include <iostream>
using namespace std;

int main(){
    float prixHt, kg, taux;

    cout << "Entrer le prix au kilo (hors taxe):" << endl;
    cin >> prixHt;

    cout << "Entrer le nombre de kilo:" << endl;
    cin >> kg;

    cout << "Entrer le taux (TVA):" << endl;
    cin >> taux;

    float tva = prixHt * taux / 100;

    float prixTTCAuKilo = prixHt + tva;

    float prixTTC = prixTTCAuKilo * kg;
    
    cout << "Le prix totale de la marchandise est: " << prixTTC << " euro";
    return 0;
}