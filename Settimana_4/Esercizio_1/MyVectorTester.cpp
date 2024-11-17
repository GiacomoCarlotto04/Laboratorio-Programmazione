#include <iostream>
#include "MyVector.h"

int main() {
    MyVector v;

    v.push_back(2.2);
    std::cout << "v[0]: " << v[0] << std::endl;
    std::cout << "pop: " << v.pop_back() << std::endl;
    std::cout << "pop: " << v.pop_back() << std::endl;

    return 0;
}
