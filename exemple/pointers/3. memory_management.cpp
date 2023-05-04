#include <iostream>

int main() {
    // Poninterii pot sa tina si adresa catre un bloc de memorie
    std::cout << "\nMemorie alocata dinamic:\n";
    // Trebuie sa tina un singur int
    // Make it work
    int* a = int(?);

    std::cout << "a: " << *a << std::endl;

    // La final trebuie stearsa memoria
    delete a;

    // Poti sa ai si bloc de memorie mai mare
    // Make it work
    int* v = int; // 3 int array

    v[0] = 2;
    v[1] = 3;
    v[2] = 4;
    for (int i = 0; i < 3; i++) {
        std::cout << "v[" << i << "] = " << v[i] << '\n';
    }

    // Sterge memorie, vezi ca trebuie sa stergi toata memoria
    // adica 3 ints, vezi si pe net
    // Make it work


    std::cout << "\nString:\n";
    std::string temp = "Ana are mere\0"; 

    // Fa un string, alocat dinamic, si printeaza-l
    // Trebuie sa fie destul de lung sa incapa temp in el + \0 de la final
    // Make it work
    char* str = ??;
    
    memcpy(str, temp.c_str(), temp.length() + 1);

    std::cout << "str: " << str << std::endl;
    return 0;
}

// PS: in c++ nu prea e recomandat sa manageriezi memorie singur, 
// prefera smart pointers sau wrappers over a pointer care sa aiba un destructor
// care sa asigure ca pointer ul este sters.