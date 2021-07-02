#include "LigneCommande.h"

LigneCommande::LigneCommande(std::string article, float prixUnitaire, int quantite)
    : article(article), prixUnitaire(prixUnitaire), quantite(quantite){}

std::string LigneCommande::getArticle() {
    return this->article;
}

float LigneCommande::getPrixUnitaire() {
    return this->prixUnitaire;
}

int LigneCommande::getQuantite() {
    return this->quantite;
}

float LigneCommande::getPrixTotalLigne() {
    return getQuantite() * getPrixUnitaire();
}

void LigneCommande::setQuantite(int quantite) {
    this->quantite = quantite;
}
