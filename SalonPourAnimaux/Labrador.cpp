#include "Labrador.h"

Labrador::Labrador(std::string nom) : Chien(nom) {}

void Labrador::mordreLeFacteur() {
    std::cout << this->getNom() << " mord le facteur\n";
}

void Labrador::parlerExtended() {
    std::cout << " : " << "Wouf Wouf\n";
}
