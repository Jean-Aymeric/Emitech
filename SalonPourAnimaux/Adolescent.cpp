#include "Adolescent.h"

void Adolescent::parler() {
    std::cout << "Trop nul\n";
}

void Adolescent::parler(bool avecNom) {
    parler();
}

void Adolescent::parler(int nbFois) {
    for (int i = 0; i < nbFois; i++) {
        parler();
    }
}

void Adolescent::parler(int nbFois, bool avecNom) {
    parler(nbFois);
}
