#include "CanradEnPlastique.h"

void CanradEnPlastique::parler() {
    std::cout << "Coin coin\n";
}

void CanradEnPlastique::parler(bool avecNom) {
    parler();
}

void CanradEnPlastique::parler(int nbFois) {
    for (int i = 0; i < nbFois; i++) {
        parler();
    }
}

void CanradEnPlastique::parler(int nbFois, bool avecNom) {
    parler(nbFois);
}
