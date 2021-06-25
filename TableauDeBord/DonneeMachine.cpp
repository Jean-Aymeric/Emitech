#include "DonneeMachine.h"

DonneeMachine::DonneeMachine(int reference, int numProduit, std::string nomProduit, std::string dateAchat) {
    this->reference = reference;
    this->numProduit = numProduit;
    this->nomProduit = nomProduit;
    this->dateAchat = dateAchat;
}

std::string DonneeMachine::getDonnees() {
    std::string valretour = "";
    valretour += "---------------------------------------------------";
    valretour += "\nRef : " + std::to_string(this->reference);
    valretour += "\nProduit : " + std::to_string(this->numProduit);
    valretour += " " + this->nomProduit;
    valretour += "\nDate achat : " + this->dateAchat;
    valretour += "\n---------------------------------------------------";
    return valretour;
}
