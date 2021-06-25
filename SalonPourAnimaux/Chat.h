#include "Animal.h"
#include <iostream>
#pragma once
class Chat : public Animal {
    public:
    Chat(std::string nom);
    // Inherited via Animal
    virtual void parlerExtended() override;
};

