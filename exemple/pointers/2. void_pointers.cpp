#include <iostream>

int main() {
    // Pointer void
    // Pointeri fiind doar o variabila care tine o adresa, putem sa o stocam intr-un void*
    // avem adresa, dar nu putem sa o accesam decat daca stim ce tip e

    int a = 10;

    std::cout << "\nVoid pointer stuff:\n";
    // Make it work
    void* vp = a;

    std::cout << (&a == vp ? "aceiasi adresa" : "adrese diferite") << '\n';

    // Asignarea nu va functiona direct
    // Make it work
    vp = 30;

    // Si nici dereference nu va merge
    // Make it work
    std::cout << "*vp: " << *vp << std::endl;
    return 0;
}

// PS: in c++ nu prea mai e recomandat sa folosesti void*
// o sa vezi prin legacy code, ai alte metode cum ar fi polimorphism 
// templates, si multe altele, dar mai vezi, si poate sa mai folosesti