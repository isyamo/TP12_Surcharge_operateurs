#include "Date.hpp"
#include <iostream>
#include <iomanip>

// Implémentation du constructeur
Date::Date(int j, int m, int an) :
		jour(j), mois(m), annee(an) {
}

// Surcharge de l'opérateur ==
bool Date::operator==(const Date &autre) const {
	return (this->jour == autre.jour) && (this->mois == autre.mois)
			&& (this->annee == autre.annee);
}

// Surcharge de l'opérateur !=
bool Date::operator!=(const Date &autre) const {
	return !(*this == autre);
}

// Implémentation de la méthode d'affichage (format JJ/MM/AAAA)
void Date::afficher() const {
	std::cout << (jour < 10 ? "0" : "") << jour << "/" << (mois < 10 ? "0" : "")
			<< mois << "/" << annee;
}
