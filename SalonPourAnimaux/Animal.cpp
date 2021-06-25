#include "Animal.h"

Animal::Animal(std::string nom) : nom(nom) {}

void Animal::parler() {
    parler(true);
}

void Animal::parler(bool avecNom) {
    if (avecNom) {
        std::cout << this->getNom();
    }
    this->parlerExtended();
}

void Animal::parler(int nbFois) {
    parler(nbFois, true);
}

void Animal::parler(int nbFois, bool avecNom) {
    for (int i = 0; i < nbFois; i++) {
        parler(avecNom);
    }
}

std::string Animal::getNom() {
    return this->nom;
}
