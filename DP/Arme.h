#include <string>
#include <iostream>
#include "IArme.h"
using  namespace std;

#pragma once
class Arme : public IArme {
    private:
    string nom;

    public:
    Arme(string nom);

    // Inherited via IArme
    virtual void taper() override;

};

