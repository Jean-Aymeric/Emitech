#include <string>
#pragma once
class DonneeDeCapteur {
    public:
    virtual std::string getDonnees() = 0;
    virtual void capter() = 0;
};

