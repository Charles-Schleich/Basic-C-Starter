#include <iostream>
#include <cmath>
#include "module1/Simple.hpp"

// Class Declarations
int main() {
    Simple simp(29);
    simp.incr_people();
    simp.incr_people();
    simp.incr_people();
    simp.incr_people();
    simp.print();

    std::cout << "hello world" << std::endl;
    return 0;
}


