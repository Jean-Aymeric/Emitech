#include "CanicheNain.h"

CanicheNain::CanicheNain(std::string nom) : Chien(nom) {}

void CanicheNain::parlerExtended() {
    std::cout << " : " << "Kai kai\n";
}
