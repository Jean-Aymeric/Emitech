#include "Salon.h"

Salon::Salon() {}

void Salon::addAnimal(IParler* animal) {
    this->animaux.push_back(animal);
}

void Salon::parler() {
	for (IParler* animal : this->animaux) {
		animal->parler();
	}
}
