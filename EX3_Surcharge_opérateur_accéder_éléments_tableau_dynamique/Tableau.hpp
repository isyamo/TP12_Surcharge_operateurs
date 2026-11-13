#ifndef TABLEAU_HPP
#define TABLEAU_HPP

#include <stdexcept>

class Tableau {
private:
    int* data;   // Pointeur dynamique
    int taille;  // Taille du tableau

public:
    // Constructeur pour initialiser le tableau
    Tableau(int t);

    // Destructeur
    ~Tableau();

    // Surcharge de l'opérateur [] version non-const pour lecture et écriture
    int& operator[](int index);

    // Surcharge de l'opérateur [] version const pour lecture seule sur objets constants
    const int& operator[](int index) const;

    // Méthode pour obtenir la taille du tableau
    int getTaille() const;
};

#endif
