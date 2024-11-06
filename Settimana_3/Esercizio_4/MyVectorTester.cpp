#include <iostream>
#include "MyVector.h"

int main() {
    MyVector v(5);

    v[3] = 3.3;
    std::cout << v[3] << std::endl;

    return 0;
}