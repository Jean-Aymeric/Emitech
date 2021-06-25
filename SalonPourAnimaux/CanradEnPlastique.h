#include <iostream>
#include "IParler.h"

#pragma once
class CanradEnPlastique : public IParler {
    public:

    // Inherited via IParler
    virtual void parler() override;
    virtual void parler(bool avecNom) override;
    virtual void parler(int nbFois) override;
    virtual void parler(int nbFois, bool avecNom) override;
};

