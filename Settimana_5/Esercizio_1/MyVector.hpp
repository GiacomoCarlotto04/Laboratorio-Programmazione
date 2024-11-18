#ifndef MyVector_hpp
#define MyVector_hpp
#include <iostream>
#include "MyVector.h"

// Costruttore
template<typename T> MyVector<T>::MyVector(int s): sz{s}, p{ new T[sz_buffer] } { }

// Costruttore di default
template<typename T> MyVector<T>::MyVector(): sz{0}, p{ new T[sz_buffer] } { }

// Costruttore di copia
template<typename T> MyVector<T>::MyVector(const MyVector<T>& v): sz{v.sz}, p{new T[v.sz_buffer]}{
    std::copy(v.p, v.p + sz, p);
}

// Costruttore di move
template<typename T> MyVector<T>::MyVector(MyVector<T>&& v): sz{v.sz}, p{v.p} {
    v.sz = 0;
    v.p = nullptr;
}

// Distruttore
template<typename T> MyVector<T>::~MyVector() {
    delete[] p;
}

// Funzione at() non const
template<typename T> T& MyVector<T>::at(int i){
	if (i < sz && i >= 0)
        return p[i];
    throw std::out_of_range("Errore: indice vector fuori dal range");
}

// Funzione at() const
template<typename T> T& MyVector<T>::at(int i) const{
	if (i < sz && i >= 0)
        return p[i];
    throw std::out_of_range("Errore: indice vector fuori dal range");
}

// Overload operator [] non const
template<typename T> T& MyVector<T>::operator[](int i){
	return at(i);
}

// Overload operator [] const
template<typename T> T& MyVector<T>::operator[](int i) const{
	return at(i);
}

// Overload operator = per copy
template<typename T> MyVector<T>& MyVector<T>::operator=(const MyVector<T>& v){
    T* new_p = new T[v.sz_buffer];
    std::copy(v.p, v.p + v.sz, new_p);
    delete[] p;
    p = new_p;
    sz = v.sz;
    return *this;
}

// Overload operator = per move
template<typename T> MyVector<T>& MyVector<T>::operator=(MyVector<T>&& v){
    delete[] p;
    p = v.p;
    sz = v.sz;
    v.p = nullptr;
    v.sz = 0;
    return *this;
}

// Funzioni push_back() e pop_back()
template<typename T> void MyVector<T>::push_back(const T& x){
	//std::cout << "sz: " << sz << " p[sz]: " << p[sz - 1] << std::endl;
	reserve(sz + 1);
	p[sz] = x;
	sz++;
	//std::cout << "sz: " << sz << " p[sz]: " << p[sz - 1] << std::endl;
}

template<typename T> T& MyVector<T>::pop_back(){
	if (sz > 0) {
		sz--;
		return p[sz];
	}
	else
		throw std::out_of_range("Errore: vettore vuoto");
}

template<typename T> void MyVector<T>::reserve(int s){
	if (s < sz_buffer)
		return;
	else {
		sz_buffer = sz_buffer * 2;
		T* new_p = new T[sz_buffer];
		std::copy(p, p + s, new_p);
		delete[] p;
		p = new_p;
	}
}

#endif