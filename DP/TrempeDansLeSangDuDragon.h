#pragma once
#include "ArmeDecoration.h"
class TrempeDansLeSangDuDragon : public ArmeDecoration {
    public: 
    TrempeDansLeSangDuDragon(IArme* arme);
    // Inherited via ArmeDecoration
    virtual void taperDecore() override;
};

