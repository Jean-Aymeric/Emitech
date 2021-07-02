#pragma once
#include "ComportementTaper.h"
class TaperEnFaisantLeCake :
    public ComportementTaper {
    // Inherited via ComportementTaper
    virtual void taper() override;
};

