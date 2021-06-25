#include "Chien.h"
#pragma once
class Labrador : public Chien {
    public:
    Labrador(std::string nom);
    void mordreLeFacteur();

    // Inherited via Chien
    virtual void parlerExtended() override;
};

