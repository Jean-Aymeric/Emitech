#pragma once
#include "ComportementTaper.h"
class TaperEnFaisantDesMoulines : public ComportementTaper {
    // Inherited via ComportementTaper
    virtual void taper() override;
};

