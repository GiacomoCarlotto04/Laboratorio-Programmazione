#include <string>
#ifndef Rational_h
#define Rational_h

class Rational {
    public:
        // Costruttore
        Rational(int num, int den);

        // Get e set
        int getNum();
        int getDen();
        void setNum(int num);
        void setDen(int den);

        // Overload operatori
        Rational operator=(Rational r);
        Rational operator+(Rational &r);
        Rational operator-(Rational &r);
        Rational operator*(Rational &r);
        Rational operator/(Rational &r);
        bool operator==(Rational &r);
        bool operator>(Rational &r);
        bool operator<(Rational &r);
        friend std::ostream& operator<<(std::ostream& os, Rational& r);

    private:
        int num;
        int den;
};

#endif