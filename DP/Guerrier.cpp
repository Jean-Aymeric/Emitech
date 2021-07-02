#include "Guerrier.h"

Guerrier::Guerrier(string nom, IArme* arme) : nom(nom), niveau(0), pointsDeVie(20), monArme(arme) {
    this->listeTaperParNiveau.push_back(new TaperCommeUneTruffe());
    this->listeTaperParNiveau.push_back(new TaperEnFaisantDesMoulines());
    this->listeTaperParNiveau.push_back(new TaperEnFaisantLeBG());
    this->listeTaperParNiveau.push_back(new TaperEnFaisantLeCake());
    this->comportementTaper = this->listeTaperParNiveau[0];
}

void Guerrier::taper() {
    this->comportementTaper->taper();
    this->monArme->taper();
}

void Guerrier::levelUp() {
    this->niveau++;
    this->setComportementTaper(this->listeTaperParNiveau[this->niveau / 2]);
}

string Guerrier::getNom() {
    return this->nom;
}

void Guerrier::setNom(string nom) {
    this->nom = nom;
}

void Guerrier::setComportementTaper(ComportementTaper* comportementTaper) {
    this->comportementTaper = comportementTaper;
}

IArme* Guerrier::getArme() {
    return this->monArme;
}

void Guerrier::setArme(IArme* arme) {
    this->monArme = arme;
}
