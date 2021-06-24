#include <iostream>
#include "FeuTricolore.h"

int main() {
    FeuTricolore f1;

    f1.couleurSuivante();
    f1.couleurSuivante();
    f1.couleurSuivante();
    f1.couleurSuivante();

    f1.ModeAnomalie();
    f1.couleurSuivante();
    f1.couleurSuivante();

    f1.ModeNormal();
    f1.couleurSuivante();
    f1.couleurSuivante();
}
