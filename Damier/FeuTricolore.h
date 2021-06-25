#include "Couleur.h"
#include <iostream>
#include <Windows.h>
#pragma once

class FeuTricolore {
    protected:
    Couleur couleur;
    bool clignotant;

    public:
    FeuTricolore();
    void couleurSuivante();
    void ModeAnomalie();
    void ModeNormal();
    void Mode(bool anomalie);
    Couleur getCouleur();
};

