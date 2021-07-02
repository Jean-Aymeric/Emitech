#pragma once

template<class T>
inline Propriete<T>::Propriete() : nom(NULL), valeur(NULL) {}

template<class T>
inline Propriete<T> ::Propriete(string nom, T valeur) : nom(nom), valeur(valeur) {
	//this->nom = nom; // deuxième méthode
}

template<class T>
inline string Propriete<T>::GetNom() {
	return this->nom;
}

template<class T>
inline T Propriete<T>::GetValeur() {
	return this->valeur;
}
