#include <iostream>
#include "MyVector.h"

int main() {
    MyVector v(5);

    v.safe_set(3, 3.3);
    std::cout << v.safe_get(3) << std::endl;

    return 0;
}