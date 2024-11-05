#include <iostream>
#include <vector>
#include <string>


void print(std::string s, std::vector<int>& v) {
	std::cout << s;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i];
		std::cout << " ";
	}
}

std::vector<int> fibonacci(int x, int y, std::vector<int>& v, int n){
	v.clear();
	
	int sum = 0;
	v.push_back(x);
	v.push_back(y);
	for (int i = 0; i < n - 2; ++i) {
		sum = x + y;
		x = y;
		y = sum;
		v.push_back(sum);
	}
	
	return v;
}

int main() {
	std::vector<int> v = {1, 2, 3, 4, 5};
	int x = 1;
	int y = 2;
	int n = 7;
	
	v = fibonacci(x, y, v, n);
	print("Vettore: ", v);
	
	return 0;
}
