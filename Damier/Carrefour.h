#include "FeuTricolore.h"
#include "FeuTricoloreDeChantier.h"
#include "FeuTricoloreDeChantierCasse.h"
#pragma once
class Carrefour {
    private:
    FeuTricolore feu1, feu2, feu3;
    void ChangerDirection();

    public:
    Carrefour();
    void Demarre();

};

