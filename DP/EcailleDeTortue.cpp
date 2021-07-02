#include "EcailleDeTortue.h"

EcailleDeTortue::EcailleDeTortue(IArme* arme) : ArmeDecoration(arme) {}

void EcailleDeTortue::taperDecore() {
    cout << " Ecailles de tortues ";
}