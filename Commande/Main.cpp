#include <iostream>
#include "Commande.h"
#include "ILigneCommande.h"
#include "LigneCommande.h"

int main() {
    Commande c1("0001"), c2("0002");
    c1.addLigne(new LigneCommande("Chaussettes", 7.50, 3));
    c1.addLigne(new LigneCommande("Pantalon", 60, 1));
    std::cout << c1 << "\n";
    c2.addLigne(new LigneCommande("Les aventuriers du rail", 26, 1));
    c2.addLigne(new LigneCommande("Les colons de Catane", 32, 2));
    std::cout << c2 << "\n";
}
