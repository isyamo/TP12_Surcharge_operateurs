#ifndef VECTEUR2D_HPP
#define VECTEUR2D_HPP

class Vecteur2D {
private:
    double x;
    double y;

public:
    // Constructeur avec valeurs par défaut
    Vecteur2D(double x = 0.0, double y = 0.0);

    // Surcharge de l'opérateur+
    Vecteur2D operator+(const Vecteur2D& autre) const;

    // Méthode pour afficher les composantes du vecteur
    void afficher() const;
};

#endif
