#include <iostream>
#include "Vecteur2D.hpp"

int main() {
	// Création de deux vecteurs
	Vecteur2D v1(3.5, 2.0);
	Vecteur2D v2(1.5, 4.0);

	// Addition de 2 vecteurs grâce à la surcharge de l'opérateur +
	Vecteur2D v3 = v1 + v2;

	std::cout << "\n <<< Test de l'addition de vecteurs >>> " << std::endl;
	std::cout << "\n Vecteur 1 = ";
	v1.afficher();

	std::cout << "\n Vecteur 2 = ";
	v2.afficher();

	std::cout << "\n Resultat (V1 + V2) = ";
	v3.afficher();

	return 0;
}
