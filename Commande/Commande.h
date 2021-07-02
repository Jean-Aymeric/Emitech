#include <string>
#include <vector>
#include <iostream>
#include "ILigneCommande.h"
#pragma once

class Commande {
    private:
    std::string numCommande;
    std::vector<ILigneCommande*> lignes;

    public:
    Commande(std::string numCommande);
    std::string getNumCommande();
    void addLigne(ILigneCommande* ligne);
    float getPrixTotal();
    std::list<ILigneCommande*> getLignes();

    friend std::ostream& operator<<(std::ostream& os, Commande& commande);
    friend Commande operator+(Commande const gauche, Commande const droite);
};

