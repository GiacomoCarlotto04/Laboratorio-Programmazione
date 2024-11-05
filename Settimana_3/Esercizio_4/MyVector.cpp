#include "MyVector.h"

// Costruttore
MyVector::MyVector(int n): n(n), p{ new double[n] } {
    for (int i = 0; i < n; i++)
        p[i] = 0;
}

// Get
double MyVector::safe_get(int i) {
    if (i < n && i >= 0)
        return p[i];
    return -1;
}

// Set
void MyVector::safe_set(int i, double x) {
    if (i < n && i >= 0)
        p[i] = x;
}

// Overload operator [] non const
//MyVector MyVector::operator[](MyVector v){
//    return null;
//}
//
//// Overload operator [] const
//MyVector MyVector::operator[](const MyVector& v){
//    return null;
//}

// Distruttore
MyVector::~MyVector() {
    delete[] p;
}