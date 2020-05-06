#include <iostream>
#include <vector>
#include <algorithm>

// Getting C++ library to sort it out for you

int main() {

	std::vector<int> value = { 3,4,5,1,2 };
	std::sort(value.begin(), value.end(), std::greater<int>());

	for (int i : value) {
		std::cout << i << std::endl;
	}

	std::cin.get();
}