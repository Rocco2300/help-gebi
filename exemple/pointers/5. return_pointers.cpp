#include <iostream>

// poti sa returnezi orice ca si pointer
// inclusiv void, o singura valoare, un bloc de memorie(array)
// trebuie sa stii ce primesti tho :/
int* get_array(int how_many) {
    // Make it work

    for (int i = 0; i < how_many; i++) {
        ret[i] = i;
    }

    return ret;
}

int main() {

    int hm = 5;

    // Make it work
    int* arr = ?;

    for (int i = 0; i < hm; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}

// PS: prefera sa folosesti STL, spre exemplu returneaza 
// un std::vector<int> in loc de int*
// la int* nu stii cate elemente are ...