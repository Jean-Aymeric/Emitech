#include "DonneeElectroMagnetique.h"

std::string DonneeElectroMagnetique::getDonnees() {
    return 
        "-----------------------------------------\n| vitesse |  1  |  2  |  3  |  4  |  5  |\n-----------------------------------------\n|Data     |  10 | 121 | 566 | 741 | 452 | \n-----------------------------------------\n";
}

void DonneeElectroMagnetique::capter() {
    std::cout << "Je suis un capteur �lectromagn�tique et je capte des donn�es\n";
}
