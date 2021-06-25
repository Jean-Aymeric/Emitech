#include <string>
#include "IDonnee.h"
#pragma once
class DonneeDeCapteur : public IDonnee {
    public:
    virtual void capter() = 0;

    // Inherited via IDonnee
    virtual std::string getDonnees() = 0;
};

