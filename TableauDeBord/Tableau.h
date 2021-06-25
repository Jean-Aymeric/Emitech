#include <list>
#include <iostream>
#include "IDonnee.h"

#pragma once
class Tableau {
    private:
    std::list<IDonnee*> capteurs;

    public:
    void addCapteur(IDonnee* capteur);
    void afficher();
};

