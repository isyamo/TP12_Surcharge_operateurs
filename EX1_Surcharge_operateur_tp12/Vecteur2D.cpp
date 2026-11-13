#include "Vecteur2D.hpp"
#include <iostream>

// Implémentation du constructeur
Vecteur2D::Vecteur2D(double x, double y) :
		x(x), y(y) {
}

// Implémentation de la surcharge de l'opérateur+
Vecteur2D Vecteur2D::operator+(const Vecteur2D &autre) const {
	return Vecteur2D(this->x + autre.x, this->y + autre.y);
}

// Implémentation de la méthode d'affichage
void Vecteur2D::afficher() const {
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}
