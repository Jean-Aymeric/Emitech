#include "Personne.h"

Personne::Personne(): nom(""), prenom("") {}

Personne::Personne(string nom, string prenom) : nom(nom), prenom(prenom) {}

std::ostream& operator<<(std::ostream& os, const Personne& personne) {
    os << personne.nom << " " << personne.prenom;
    return os;
}
