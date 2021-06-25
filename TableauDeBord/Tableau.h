#include <list>
#include <iostream>
#include "DonneeDeCapteur.h"
#pragma once
class Tableau {
    private:
    std::list<DonneeDeCapteur*> capteurs;

    public:
    void addCapteur(DonneeDeCapteur* capteur);
    void afficher();
};

