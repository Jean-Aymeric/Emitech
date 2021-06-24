#include "Carrefour.h"

Carrefour::Carrefour() {
    this->feu1 = FeuTricolore();
    this->feu2 = FeuTricolore();
    this->feu3 = FeuTricolore();
}

void Carrefour::Demarre() {
    this->feu1.couleurSuivante();
    for(;;) {
        Sleep(10000);
        ChangerDirection();
    }
}

void Carrefour::ChangerDirection() {
    if (this->feu1.getCouleur() == Couleur::Vert) {
        std::cout << "Feu 1 :";
        this->feu1.couleurSuivante();
        std::cout << "Feu 2 :";
        this->feu2.couleurSuivante();
    } else  if (this->feu2.getCouleur() == Couleur::Vert) {
        std::cout << "Feu 2 :";
        this->feu2.couleurSuivante();
        std::cout << "Feu 3 :";
        this->feu3.couleurSuivante();
    } else  {
        std::cout << "Feu 3 :";
        this->feu3.couleurSuivante();
        std::cout << "Feu 1 :";
        this->feu1.couleurSuivante();
    }
}
