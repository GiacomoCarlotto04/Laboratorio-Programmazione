#include <iostream>
#include <string>
#include "Rational.h"

int main() {
    Rational r1(1, 2);
    Rational r2(2, 2);

    std::cout << "r1: " << r1.getNum() << "/" << r1.getDen() << std::endl;
    std::cout << "r2: " << r2.getNum() << "/" << r2.getDen() << std::endl;

    Rational r3 = r1;
    std::cout << "r3 = " << r3.getNum() << "/" << r3.getDen() << std::endl;

    r3 = r1 + r2;
    std::cout << "r1 + r2 = " << r3.getNum() << "/" << r3.getDen() << std::endl;

    r3 = r1 - r2;
    std::cout << "r1 - r2 = " << r3.getNum() << "/" << r3.getDen() << std::endl;

    r3 = r1 * r2;
    std::cout << "r1 * r2 = " << r3.getNum() << "/" << r3.getDen() << std::endl;

    r3 = r1 / r2;
    std::cout << "r1 / r2 = " << r3.getNum() << "/" << r3.getDen() << std::endl;

    std::string resultGreater = "";
    if (r1 > r2)
        resultGreater = "true";
    else
        resultGreater = "false";

    std::cout << "r1 > r2 ? " << resultGreater << std::endl;

    std::string resultLess = "";
    if (r1 < r2)
        resultLess = "true";
    else
        resultLess = "false";

    std::cout << "r1 < r2 ? " << resultLess << std::endl;

    std::cout << "r1 = " << r1 << std::endl;
    return 0;
};