#ifndef DATE_HPP
#define DATE_HPP

class Date {
private:
	int jour;
	int mois;
	int annee;

public:
	// Constructeur avec paramètres
	Date(int j = 1, int m = 1, int an = 2000);

	// Surcharge des opérateurs de comparaison
	bool operator==(const Date &autre) const;
	bool operator!=(const Date &autre) const;

	// Méthode pour afficher la date
	void afficher() const;
};

#endif
