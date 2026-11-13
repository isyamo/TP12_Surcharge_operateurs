#include "Tableau.hpp"
#include <stdexcept>

// Implémentation du constructeur

Tableau::Tableau(int t) :
		taille(t) {
	if (t <= 0) {
		throw std::invalid_argument(
				"\n La taille du tableau doit être strictement positive.");
	}

	// Allocation dynamique du tableau
	data = new int[taille];

	for (int i = 0; i < taille; ++i) {
		data[i] = 0;
	}
}

// Implémentation du destructeur

Tableau::~Tableau() {

	// Libération de la mémoire

	delete[] data;
}

// Surcharge de l'opérateur[] écriture / modification

int& Tableau::operator[](int index) {

	if (index < 0 || index >= taille) {

		throw std::out_of_range(" Erreur : Indice hors limites du tableau !");
	}
	return data[index];
}

// Surcharge de l'opérateur[] lecture seule
const int& Tableau::operator[](int index) const {
	if (index < 0 || index >= taille) {
		throw std::out_of_range(" Erreur : Indice hors limites du tableau !");
	}
	return data[index];
}

int Tableau::getTaille() const {
	return taille;
}
