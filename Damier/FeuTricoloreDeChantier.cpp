#include "FeuTricoloreDeChantier.h"

FeuTricoloreDeChantier::FeuTricoloreDeChantier() {
    std::cout << "Je suis un feu tricolore de chantier\n";
}

void FeuTricoloreDeChantier::couleurSuivante() {
	if (!this->clignotant) {
		switch (this->couleur) {
			case Couleur::Rouge:
				this->couleur = Couleur::Vert;
				break;
			case Couleur::Vert:
				this->couleur = Couleur::Rouge;
				break;
			default:
				break;
		}
	}
	std::cout << this->couleur << "\n";
}

void FeuTricoloreDeChantier::faireUnTruc() {
	std::cout << "Je fais un truc\n";
}
