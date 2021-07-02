#include "Arme.h"

Arme::Arme(string nom) : nom(nom){}

void Arme::taper() {
    cout << this->nom << endl;
}
