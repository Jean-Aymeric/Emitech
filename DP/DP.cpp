#include "Guerrier.h"
#include "Epee.h"
#include "TrempeDansLeSangDuDragon.h"
#include "EcailleDeTortue.h"
#include <iostream>

int main()
{
    Guerrier jad("JAD", new Epee());
    jad.taper();
    jad.levelUp();
    jad.taper();
    jad.levelUp();
    jad.setArme(new TrempeDansLeSangDuDragon(jad.getArme()));
    jad.taper();
    jad.levelUp();
    jad.levelUp();
    jad.setArme(new EcailleDeTortue(jad.getArme()));
    jad.taper();
    jad.levelUp();
    jad.levelUp();
    jad.taper();
}
