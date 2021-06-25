#include "DonneeDeCapteur.h"
#include <iostream>
#pragma once
class DonneeForce : public DonneeDeCapteur {
    // Inherited via DonneeDeCapteur
    virtual std::string getDonnees() override;
    virtual void capter() override;
};
