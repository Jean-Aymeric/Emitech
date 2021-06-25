#include <iostream>
#include "IParler.h"
#pragma once
class Adolescent : public IParler {
    // Inherited via IParler
    virtual void parler() override;
    virtual void parler(bool avecNom) override;
    virtual void parler(int nbFois) override;
    virtual void parler(int nbFois, bool avecNom) override;
};

