#include "TrempeDansLeSangDuDragon.h"

TrempeDansLeSangDuDragon::TrempeDansLeSangDuDragon(IArme* arme) : ArmeDecoration(arme){}

void TrempeDansLeSangDuDragon::taperDecore() {
    cout << " Tremp�e dans le sang du dragon ";
}
