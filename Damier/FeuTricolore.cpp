#include "FeuTricolore.h"

FeuTricolore::FeuTricolore() {
	this->couleur = Couleur::Rouge;
	this->clignotant = false;
}

void FeuTricolore::couleurSuivante() {
	if (!this->clignotant) {
		switch (this->couleur) {
			case Couleur::Rouge:
				this->couleur = Couleur::Vert;
				break;
			case Couleur::Vert:
				this->couleur = Couleur::Orange;
				for (int i = 0; i < 5; i++) {
					Sleep(1000);
					std::cout << ".";
				}
				std::cout << "\n";
			case Couleur::Orange:
				this->couleur = Couleur::Rouge;
				break;
			default:
				break;
		}
	}
	std::cout << this->couleur << "\n";
}

void FeuTricolore::ModeAnomalie() {
	this->clignotant = true;
	this->couleur = Couleur::Orange;
}

void FeuTricolore::ModeNormal() {
	this->clignotant = false;
	this->couleur = Couleur::Rouge;
}

void FeuTricolore::Mode(bool anomalie) {
	if (anomalie) {
		ModeAnomalie();
	} else {
		ModeNormal();
	}
}

Couleur FeuTricolore::getCouleur() {
	return this->couleur;
}
