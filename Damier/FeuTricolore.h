#include "Couleur.h"
#include <iostream>
#pragma once

class FeuTricolore {
    private:
    Couleur couleur;
    bool clignotant;

    public:
    FeuTricolore();
    void couleurSuivante();
    void ModeAnomalie();
    void ModeNormal();
    void Mode(bool anomalie);
};

