#include "ArmeDecoration.h"

ArmeDecoration::ArmeDecoration(IArme* armeQueJeDecore) : armeQueJeDecore(armeQueJeDecore) {}

void ArmeDecoration::taper() {
    this->taperDecore();
    this->armeQueJeDecore->taper();
}
