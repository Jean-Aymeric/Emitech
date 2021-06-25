#include "Chien.h"
#pragma once
class CanicheNain : public Chien {
    public:
    CanicheNain(std::string nom);

    // Inherited via Chien
    virtual void parlerExtended() override;
};

