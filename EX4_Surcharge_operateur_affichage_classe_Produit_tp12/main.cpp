#include <iostream>
#include "Produit.hpp"

int main() {

	// Création de deux objets Produit

	Produit p1("Ordinateur Portable", 7500.00, 12);
	Produit p2("Clavier Mecanique", 450.50, 30);

	std::cout << "\n <<< Test d'affichage direct avec std::cout >>> "
			<< std::endl;

	// Affichage

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;

	return 0;
}
