#include <iostream>
#include "MyVector.cpp"


int main() {
    MyVector<double> v;

    v.push_back(2.2);
    std::cout << "v[0]: " << v[0] << std::endl;
//    std::cout << "pop: " << v.pop_back() << std::endl;
//    std::cout << "pop: " << v.pop_back() << std::endl;

    MyVector<double> v1(v);
    std::cout << "v1[0]: " << v1[0] << std::endl;

    MyVector<double> v2;
    v2 = v1;
    std::cout << "v2[0]: " << v2[0] << std::endl;

    MyVector<char> v3;
    v3.push_back('a');
    std::cout << "v3[0]: " << v3[0] << std::endl;

    return 0;
}
