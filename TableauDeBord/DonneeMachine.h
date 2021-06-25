#include <string>
#include "IDonnee.h"
#pragma once
class DonneeMachine : public IDonnee {
    private:
    int reference;
    int numProduit;
    std::string nomProduit;
    std::string dateAchat;

    public:
    DonneeMachine(int reference, int numProduit, std::string nomProduit, std::string dateAchat);

    // Inherited via IDonnee
    virtual std::string getDonnees() override;
};

