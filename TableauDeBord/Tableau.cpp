#include "Tableau.h"

void Tableau::addCapteur(DonneeDeCapteur* capteur) {
    this->capteurs.push_back(capteur);
}

void Tableau::afficher() {
    std::cout << "--------------------------------------------\n";
    std::cout << "      TABLEAU DE BORD\n";
    std::cout << "--------------------------------------------\n";
    int i = 0;
    for (DonneeDeCapteur* capteur : this->capteurs) {
        std::cout << "--------------------------------------------\n";
        std::cout << "CAPTEUR : " << i++ << "\n";
        std::cout << capteur->getDonnees() << "\n";
        std::cout << "--------------------------------------------\n";
    }
}
