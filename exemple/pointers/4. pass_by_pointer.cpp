#include <iostream>

// daca pasezi o variabila ca si pointer
// ai acces la adresa, o poti modifica
// nu este recomandat in c++ pentru ca ai referinte
// o sa vezi in legacy code si c code
void pass_by_ptr(int* a) {
    *a = 2;
}

// poti face asta si cu void* dar nu se prea mai practica,
// decat in legacy / c code ca si metoda de programare "generica"
// trebuie sa ai o metoda de a stii ce tine void ala, dar aici doar 
// iti arat ca poti face asta
void pass_by_void_ptr(void* a)  {
    *(int*) a = 2;
}

// Make it work
void pass_by_ptrptr(int* a) {
    a = new int(3);
}

// Poti sa faci functia de mai sus sa mearga cu un void*?
// Make it work
void pass_by_void_ptrptr(void** a) {

}

int main() {
    int a = 10;

    std::cout << "\nPass by ptr: \n";
    std::cout << "Inainte: " << a << std::endl;

    // Da adresa lui a prin functie
    // Make it work
    pass_by_ptr(a);

    std::cout << "Dupa: " << a << std::endl;

    std::cout << "\nPass by pointer pointer:\n";
    // Daca vrei sa modifici obiectul / adresa de memorie a unui pointer
    // transmis ca parametru, nu o sa functioneze sa ii dai doar *, trebuie un pointer dublu
    // recomandat in c++ sa fie *& (reference catre ptr), dar o sa vezi ** in c si legacy

    int* var;
    // Make it work
    pass_by_ptrptr(var);

    std::cout << "Adresa var: " << var << std::endl;
    std::cout << "Var: " << (var ? *var : 0) << std::endl; // am pus null check sa nu crape
    // NULL sau nullptr in c++ sunt == 0 adica poti sa faci if (ptr) / if (ptr == NULL) / if (ptr == nullptr)
    // recomandat este sa folosesti ultima pentru claritate, merge si prima, nu o folosi pe cea din mijloc in c++

    delete var;

    std::cout << "\nPass by void pointer:\n";

    int b = 20;

    std::cout << "Inainte: " << b << std::endl;

    // Make it work
    pass_by_void_ptr(b);

    std::cout << "Dupa: " << b << std::endl;

    std::cout << "\nPass by void poniter pointer:\n";

    // Make it work

    return 0;
}

// PS: prefera reference over pointer