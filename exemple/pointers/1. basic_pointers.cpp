#include <iostream>

int main() {
    int a = 10;

    // Make it work
    int* p = a;

    std::cout << "Adrese:\n";
    std::cout << "&a: " << &a << std::endl; // printam adresa lui a
    std::cout << "p:  " << p  << std::endl; // il printam pe p, care are adresa lui a
    std::cout << (&a == p ? "aceiasi adresa" : "adrese diferite") << '\n';

    std::cout << "\nValori stocate:\n";
    // putem sa accesam ce e in a, prin p
    std::cout << "a:  " << a  << std::endl;
    // Trebuie sa dai dereference la pointer
    // Make it work
    std::cout << "*p: " << p << std::endl; 

    // Asignarea la pointer
    // Daca asignam o valoare diferita unui pointer, va modifica valoare de la aceea adresa.
    
    // Incearca sa modifici valoarea lui a folosind p
    // Make it work
    p = 10;
    // Pentru ca am modificat valoarea de la adresa, care e adresa lui a, si a este schimbat
    std::cout << "\nAsignare pointer:\n";
    std::cout << "a:  " << a  << std::endl;
    std::cout << "*p: " << *p << std::endl;

    return 0;
}