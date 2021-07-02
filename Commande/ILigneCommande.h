#include <string>
#pragma once
class ILigneCommande {
    public:
    virtual std::string getArticle() = 0;
    virtual  float getPrixUnitaire() = 0;
    virtual  int getQuantite() = 0;
    virtual float getPrixTotalLigne() = 0;
    virtual void setQuantite(int quantite) = 0;
};

