#include <iostream>
#include "DonneeElectroMagnetique.h"
#include "DonneeForce.h"
#include "DonneeVitesse.h"
#include "Tableau.h"

int main()
{
    Tableau monTableau;
    for (int i = 0; i < 10; i++) {
        DonneeElectroMagnetique c1;
        DonneeForce c2, c3;
        DonneeVitesse c4;
        monTableau.addCapteur(&c1);
        monTableau.addCapteur(&c2);
        monTableau.addCapteur(&c3);
        monTableau.addCapteur(&c4);
    }
    monTableau.afficher();
}
