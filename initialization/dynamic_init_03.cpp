#include <cstdlib>
#include <iostream>

struct Nec {
    Nec ()
    {
        std::cout << "constructor\n";
    }
};

Nec gnec; //dynamic init.
int value = std::rand(); // dynamic init

