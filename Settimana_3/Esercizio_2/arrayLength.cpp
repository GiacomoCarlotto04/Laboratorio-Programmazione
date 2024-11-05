#include <iostream>

const int n = 10;

void print(double* a){
	for (int i = 0; i < n; i++)
		std::cout << "a[" << i << "] = " << a[i] << ", ";
	std::cout << std::endl;
}

void print_array_length(double* a){
    std::cout << "print_array_length) sizeof: " << sizeof(a) << std::endl; // sizeof(a) = 8
    print(a);
}

int main() {
	double a[n] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
	std::cout << "main) sizeof: " << sizeof(a) << std::endl; // sizeof(a) = 80
    print_array_length(a);

	return 0;
}
