#include <string>
#include <iostream>
#include <ostream>

#pragma once
using namespace std;

template<class T>
class Propriete {
	private:
	string nom;
	T valeur;

	public:
	Propriete();
	Propriete(string nom, T valeur);
	string GetNom();
	T GetValeur();
};

#include "Propriete.ipp"
