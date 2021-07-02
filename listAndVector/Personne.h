#include <string>
#include <ostream>
#include <iostream>
using namespace std;

#pragma once
class Personne {
    private:
    string nom;
    string prenom;

    public:
    Personne();
    Personne(string nom, string prenom);
    friend std::ostream& operator<<(std::ostream& os, const Personne& personne);
};

