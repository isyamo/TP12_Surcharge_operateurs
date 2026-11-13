#include "Produit.hpp"

Produit::Produit(const std::string &nom, double prix, int quantite) :
		nom(nom), prix(prix), quantite(quantite) {
}

// Implémentation de la fonction friend pour la surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream &os, const Produit &p) {
	os << "\n  Produit : " << p.nom << " , Prix : " << p.prix << " DH"
			<< " , Stock : " << p.quantite << " unites";
	return os;
}
