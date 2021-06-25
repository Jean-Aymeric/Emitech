#include <list>
#include "Animal.h"

#pragma once
class Salon {
    private:
    std::list<IParler*> animaux;

    public:
    Salon();
    void addAnimal(IParler* animal);
    void parler();
};

