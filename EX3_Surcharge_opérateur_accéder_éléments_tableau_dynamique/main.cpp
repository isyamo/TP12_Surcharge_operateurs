#include <iostream>
#include "Tableau.hpp"

int main() {
	try {

		// Création d'un tableau dynamique

		int tailleInitiale = 5;
		Tableau t(tailleInitiale);

		std::cout << "\n <<< Remplissage et lecture normale du tableau >>> "
				<< std::endl;
		for (int i = 0; i < t.getTaille(); ++i) {
			t[i] = (i + 1) * 10; // l'opérateur[] en écriture
			std::cout << "t[" << i << "] = " << t[i] << std::endl; // l'opérateur[]  en lecture
		}

		std::cout << "\n <<< Test de securite (Depassement des bornes) >>> "
				<< std::endl;
		std::cout << "\n Tentative d'acces a l'index 10 (inexistant)..."
				<< std::endl;

		//  déclencher une exception car 10 >= taille (5)
		t[10] = 99;

	} catch (const std::out_of_range &e) {

		// exception  Capturee liée aux bornes du tableau

		std::cerr << "\n Exception attrapée avec succès ==>  " << e.what()
				<< std::endl;
	} catch (const std::exception &e) {
		// Capture des autres exceptions standards éventuelles
		std::cerr << "\n Autre exception : " << e.what() << std::endl;
	}

	return 0;
}
