#include <iostream>
#include "Date.hpp"

int main() {
    // Création de plusieurs objets Date
    Date date1(25, 12, 2026);
    Date date2(25, 12, 2026);
    Date date3(1, 1, 2027);

    std::cout << "\n <<< Test de comparaison de dates >>> " << std::endl;

    std::cout << "\n Date 1 : ";
    date1.afficher();
    std::cout << std::endl;

    std::cout << "\n Date 2 : ";
    date2.afficher();
    std::cout << std::endl;

    std::cout << "\n Date 3 : ";
    date3.afficher();
    std::cout << std::endl << std::endl;

    // Comparaison 1 : Date 1 et Date 2
    std::cout << "\n Comparaison Date 1 et Date 2 : " << std::endl;
    if (date1 == date2) {
        std::cout << "\n -> Les deux dates sont identiques (==)." << std::endl;
    } else {
        std::cout << "\n -> Les deux dates sont differentes." << std::endl;
    }

    // Comparaison 2 : Date 1 et Date 3
    std::cout << "\n Comparaison Date 1 et Date 3 :" << std::endl;
    if (date1 != date3) {
        std::cout << "\n -> Les deux dates sont bien differentes (!=)." << std::endl;
    } else {
        std::cout << "\n -> Les deux dates sont identiques." << std::endl;
    }

    return 0;
}
