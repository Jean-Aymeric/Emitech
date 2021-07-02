#include "TrempeDansLeSangDuDragon.h"

TrempeDansLeSangDuDragon::TrempeDansLeSangDuDragon(IArme* arme) : ArmeDecoration(arme){}

void TrempeDansLeSangDuDragon::taperDecore() {
    cout << " Trempée dans le sang du dragon ";
}
