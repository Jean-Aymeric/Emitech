#include <string>
#include "ILigneCommande.h"
#pragma once
class LigneCommande : public ILigneCommande {
    private:
    std::string article;
    float prixUnitaire;
    int quantite;

    public:
    LigneCommande(std::string article, float prixUnitaire, int quantite);

    // Inherited via ILigneCommande
    virtual std::string getArticle() override;
    virtual float getPrixUnitaire() override;
    virtual int getQuantite() override;
    virtual float getPrixTotalLigne() override;
};

