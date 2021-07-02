#include <string>
#include <iostream>
#include "ComportementTaper.h"
#include "TaperCommeUneTruffe.h"
#include "TaperEnFaisantDesMoulines.h"
#include "TaperEnFaisantLeBG.h"
#include "TaperEnFaisantLeCake.h"
#include <vector>
#include "IArme.h"
using namespace std;

#pragma once
class Guerrier {
    private:
    string nom;
    int niveau;
    int pointsDeVie;
    vector<ComportementTaper*> listeTaperParNiveau;
    ComportementTaper *comportementTaper;
    IArme *monArme;

    public:
    Guerrier(string nom, IArme * arme);
    void taper();
    void levelUp();
    string getNom();
    void setNom(string nom);
    void setComportementTaper(ComportementTaper* comportementTaper);
    IArme* getArme();
    void setArme(IArme* arme);
};

