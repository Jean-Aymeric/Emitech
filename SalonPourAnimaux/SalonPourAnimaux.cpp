#include <iostream>
#include "Animal.h"
#include "Chat.h"
#include "Labrador.h"
#include "CanicheNain.h"
#include "CanicheNainMuet.h"
#include "CanradEnPlastique.h"
#include "Salon.h"
#include "IParler.h"
#include "Adolescent.h"

int main() {
    Chat mimi("Mimi");
    Labrador sultan("Sultan");
    CanicheNain kiki("kiki");
    CanicheNainMuet medor("Medor");
    CanradEnPlastique canard;
    Salon monSalon;
    Adolescent monAdo;
    
    monSalon.addAnimal(&mimi);
    monSalon.addAnimal(&kiki);
    monSalon.addAnimal(&sultan);
    monSalon.addAnimal(&medor);
    monSalon.addAnimal(&canard);
    monSalon.addAnimal(&monAdo);
    monSalon.parler();
}
