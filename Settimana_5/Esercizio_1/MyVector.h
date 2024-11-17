#ifndef MYVECTOR_H
#define MYVECTOR_H

template<typename T>
class MyVector {
    public:
        // Costruttore
        MyVector(int s);
        MyVector();
        MyVector(const MyVector& v);
        MyVector(MyVector&& v);

        // Distruttore
        ~MyVector();

        // Overload operatori
        T& operator[](int i);
        T& operator[](int i) const;
        MyVector& operator=(const MyVector& v);
        MyVector& operator=(MyVector&& v);

        // Funzioni membro
        T& at(int i);
        T& at(int i) const;
        void push_back(const T& x);
        T& pop_back();
   		void reserve(int s);
        

    private:
        int sz;
        int sz_buffer {10};
        T *p;
};

#include "MyVector.cpp"
#endif