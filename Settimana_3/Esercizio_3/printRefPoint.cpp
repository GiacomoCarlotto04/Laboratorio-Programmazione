#include <iostream>

const int n = 10;

// Stampa con passaggio per const reference
void print_reference(const int& x, const double& y){
    std::cout << "const reference: " << x << ", " << y << std::endl;
}

// Stampa con passaggio per puntatore
void print_pointer(int* x, double* y){
    std::cout << "puntatore: " << *x << ", " << *y  << std::endl;
}

int main() {
	int x = 3;
	double y = 3.3;

    print_reference(x, y);
    print_pointer(&x, &y); // Passaggio riferimenti in memoria di x e y

	return 0;
}
