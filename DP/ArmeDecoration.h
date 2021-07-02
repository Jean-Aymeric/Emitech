#include <iostream>
#include "IArme.h"
#pragma once
using namespace std;

class ArmeDecoration :
    public IArme {
    private:
    IArme* armeQueJeDecore;

    protected:
    virtual void taperDecore() = 0;

    public:
    ArmeDecoration(IArme* armeQueJeDecore);
    // Inherited via IArme
    virtual void taper() override;
};

