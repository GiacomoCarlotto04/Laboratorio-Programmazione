#include <iostream>
#include <vector>
#include <string>


void print(std::string s, std::vector<int>& v) {
	std::cout << s;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i];
	}
}

int main() {
	std::string s = "Vector: ";
	std::vector<int> v = {1, 2, 3, 4, 5};
	print(s, v);
	
	return 0;
}
