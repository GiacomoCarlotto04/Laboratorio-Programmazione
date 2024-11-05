#include <iostream>

const int n = 10;

void print(int* a){
	for (int i = 0; i < n; i++)
		std::cout << "a[" << i << "] = " << a[i] << ", ";
	std::cout << std::endl;
}

void f() {
	int a[n];
	int* p = &a[5];
	
	*p = 5; // a[5] = 5;
	p[1] = 6; // a[6] = 6;
	p[2] = 7; // a[7] = 7;
	p[3] = 8; // a[8] = 8;
	p[4] = 9; // a[9] = 9;
	p[-1] = 4; // a[4] = 4;
	p[-2] = 3; // a[3] = 3;
	p[-3] = 2; // a[2] = 2;
	p[-4] = 1; // a[1] = 1;
	p[-5] = 0; // a[0] = 0;
	
	print(a);
}

void f_illegal() {
	int b[n];
	int* p = &b[5];
	
	*p = 5; // b[5] = 5;
	p[4] = 13;
	p[7] = 10;
	p[8] = 11;
	p[9] = 12; // Error: Segmentantion fault

	print(b);
}

void print_array_length(){

}

int main() {
	f();
	f_illegal();

	return 0;
}
