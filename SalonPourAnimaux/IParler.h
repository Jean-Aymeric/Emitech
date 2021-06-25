#pragma once
class IParler {
    public:
    virtual void parler() = 0;
    virtual void parler(bool avecNom) = 0;
    virtual void parler(int nbFois) = 0;
    virtual void parler(int nbFois, bool avecNom) = 0;
};
