#include <iostream>
#include "MyVector.h"

// Costruttore
MyVector::MyVector(int s): sz{s}, p{ new double[sz_buffer] } { }

// Costruttore di default
MyVector::MyVector(): sz{0}, p{ new double[sz_buffer] } { }

// Distruttore
MyVector::~MyVector() {
    delete[] p;
}

// Funzione at() non const
double& MyVector::at(int i){
	if (i < sz && i >= 0)
        return p[i];
    throw std::out_of_range("Errore: indice vector fuori dal range");
}

// Funzione at() const
double& MyVector::at(int i) const{
	if (i < sz && i >= 0)
        return p[i];
    throw std::out_of_range("Errore: indice vector fuori dal range");
}

// Overload operator [] non const
double& MyVector::operator[](int i){
	return at(i);
}

// Overload operator [] const
double& MyVector::operator[](int i) const{
	return at(i);
}

// Funzioni push_back() e pop_back()
void MyVector::push_back(const double& x){
	//std::cout << "sz: " << sz << " p[sz]: " << p[sz - 1] << std::endl;
	reserve(sz + 1);
	p[sz] = x;
	sz++;
	//std::cout << "sz: " << sz << " p[sz]: " << p[sz - 1] << std::endl;
}

double& MyVector::pop_back(){
	if (sz > 0) {
		sz--;
		return p[sz];
	}
	else
		throw std::out_of_range("Errore: vettore vuoto");
}

void MyVector::reserve(int s){
	if (s < sz_buffer)
		return;
	else {
		sz_buffer = sz_buffer * 2;
		double* new_p = new double[sz_buffer];
		std::copy(p, p + s, new_p);
		delete[] p;
		p = new_p;
	}
}
