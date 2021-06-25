#include <string>
#include <iostream>
#include "IParler.h"

#pragma once
class Animal : public IParler {
    private:
    std::string nom;

    public:
    Animal(std::string nom);
    virtual void parler() override;
    virtual void parler(bool avecNom) override;
    virtual void parler(int nbFois) override;
    virtual void parler(int nbFois, bool avecNom) override;
    virtual void parlerExtended() = 0;
    std::string getNom();
};

