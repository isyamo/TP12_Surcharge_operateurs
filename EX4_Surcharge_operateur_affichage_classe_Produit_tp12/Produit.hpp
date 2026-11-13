#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>
#include <iostream>

class Produit {
private:
	std::string nom;
	double prix;
	int quantite;

public:

	Produit(const std::string &nom, double prix, int quantite);

	// Surcharge declarre
	friend std::ostream& operator<<(std::ostream &os, const Produit &p);
};

#endif
