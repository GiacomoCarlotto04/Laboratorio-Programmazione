#include <iostream>
#include "MyVector.h"

// Costruttore
MyVector::MyVector(int n): n(n), p{ new double[n] } {
    for (int i = 0; i < n; i++)
        p[i] = 0;
}

// Get non const
double& MyVector::safe_get(int i){
    if (i < n && i >= 0)
        return p[i];
    throw std::out_of_range("Errore: indice vector fuori dal range");
}

// Get const
double MyVector::safe_get(int i) const{
    if (i < n && i >= 0)
        return p[i];
    throw std::out_of_range("Errore: indice vector fuori dal range");
}

// Set
void MyVector::safe_set(int i, double x) {
    if (i < n && i >= 0)
        p[i] = x;
}

// Overload operator [] non const
double& MyVector::operator[](int i){
    return safe_get(i);
}

// Overload operator [] const
double MyVector::operator[](int i) const{
    return safe_get(i);
}

// Distruttore
MyVector::~MyVector() {
    delete[] p;
}