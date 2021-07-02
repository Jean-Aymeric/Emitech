#pragma once
#include "ArmeDecoration.h"
class EcailleDeTortue : public ArmeDecoration {
    public:
    EcailleDeTortue(IArme* arme);
    // Inherited via ArmeDecoration
    virtual void taperDecore() override;
};

