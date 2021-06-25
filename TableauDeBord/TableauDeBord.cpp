#include <iostream>
#include "DonneeElectroMagnetique.h"
#include "DonneeForce.h"
#include "DonneeVitesse.h"
#include "DonneeMachine.h"
#include "DonneeCloud.h"
#include "Tableau.h"

int main()
{
    Tableau monTableau;
    for (int i = 0; i < 1; i++) {
        DonneeElectroMagnetique c1;
        DonneeForce c2, c3;
        DonneeVitesse c4;
        monTableau.addCapteur(&c1);
        monTableau.addCapteur(&c2);
        monTableau.addCapteur(&c3);
        monTableau.addCapteur(&c4);
    }
    DonneeMachine d1(123456789, 6611209, "X78FT45 2.3", "2015-05-16");
    monTableau.addCapteur(&d1);
    DonneeCloud d2;
    monTableau.addCapteur(&d2);
    monTableau.afficher();
}
