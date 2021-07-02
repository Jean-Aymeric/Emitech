#include "Commande.h"

Commande::Commande(std::string numCommande) : numCommande(numCommande) {}

std::string Commande::getNumCommande() {
    return this->numCommande;
}

void Commande::addLigne(ILigneCommande* ligne) {
    bool articleTrouve = false;
    for (ILigneCommande* lignePresente : this->lignes) {
        if ((lignePresente->getArticle() == ligne->getArticle())
             && (lignePresente->getPrixUnitaire() == ligne->getPrixUnitaire())) {
            lignePresente->setQuantite(lignePresente->getQuantite() + 1);
            articleTrouve = true;
        }
    }
    if (!articleTrouve) {
        this->lignes.push_back(ligne);
    }
}

float Commande::getPrixTotal() {
    float resultat = 0.0;
    for (ILigneCommande* ligne : this->lignes) {
        resultat += ligne->getPrixTotalLigne();
    }
    return resultat;
}

std::list<ILigneCommande*> Commande::getLignes() {
    return this->lignes;
}

std::ostream& operator<<(std::ostream& os, Commande& commande) {
    os << "Commande : " << commande.getNumCommande() << " " << commande.getPrixTotal() << "\n";
    int i = 1;
    for (ILigneCommande* ligne : commande.getLignes()) {
        os << i++ << " : " << ligne->getArticle() << " "
            << ligne->getPrixUnitaire() << " x " << ligne->getQuantite()
            << " = " << ligne->getPrixTotalLigne() << "\n";
    }
    return os;
}

Commande operator+(Commande gauche, Commande droite) {
    Commande resultat(gauche.getNumCommande() + droite.getNumCommande());
    for (ILigneCommande* ligne : gauche.getLignes()) {
        resultat.addLigne(ligne);
    }
    for (ILigneCommande* ligne : droite.getLignes()) {
        resultat.addLigne(ligne);
    }
    return resultat;
}
