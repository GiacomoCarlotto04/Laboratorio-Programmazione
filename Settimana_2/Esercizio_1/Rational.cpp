#include "Rational.h"
#include <iostream>
#include <string>

// Costruttore
Rational::Rational(int num, int den): num(num), den(den) {}

// Get
int Rational::getNum() { return num; }
int Rational::getDen() { return den; }

// Set
void Rational::setNum(int num) { this->num = num; }
void Rational::setDen(int den) { this->den = den; }

// Overload operator =
Rational Rational::operator=(Rational r){
    return Rational(r.getNum(), r.getDen());
}

// Overload operator +
Rational Rational::operator+(Rational &r){
    if(den == r.den)
        return Rational(num + r.num, den);
    else{
        int mulDen = den * r.den;
        int sumNum = (mulDen / den) * num + (mulDen / r.den) * r.num;
        return Rational(sumNum, mulDen);
    }
}

// Overload operator -
Rational Rational::operator-(Rational &r){
    if(den == r.den)
        return Rational(num - r.num, den);
    else{
        int mulDen = den * r.den;
        int subNum = (mulDen / den) * num - (mulDen / r.den) * r.num;
        return Rational(subNum, mulDen);
    }
}

// Overload operator *
Rational Rational::operator*(Rational &r){
    return Rational(num * r.num, den * r.den);
}

// Overload operator /
Rational Rational::operator/(Rational &r){
    return Rational(num * r.den, den * r.num);
}

// Overload operator ==
bool Rational::operator==(Rational &r){
    if (num == r.num && den == r.den)
        return true;
    else
        return false;
}

// Overload operator >
bool Rational::operator>(Rational &r){
    if (den == r.den) {
        if (num > r.num)
            return true;
    } else {
        if ((num * r.den) > (r.num * den))
            return true;
    }
    return false;
}

// Overload operator <
bool Rational::operator<(Rational &r){
    if (den == r.den) {
        if (num < r.num)
            return true;
    } else {
        if ((num * r.den) < (r.num * den))
            return true;
    }
    return false;
}

// Overload operator <<
std::ostream& operator<<(std::ostream& os, Rational& r) {
    os << r.getNum() << '/' << r.getDen();
    return os;
}