#pragma once
#include "ComportementTaper.h"

class TaperEnFaisantLeBG : public ComportementTaper {
    // Inherited via ComportementTaper
    virtual void taper() override;
};
