#include "IDonnee.h"
#pragma once
class DonneeCloud : public IDonnee {
    // Inherited via IDonnee
    virtual std::string getDonnees() override;
};

