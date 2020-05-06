#include <iostream>


template<typename T> void Print(T value) {
	std::cout << value << std::endl;
}

// To avoid to manually define overloads, we do templates

int main() {
	Print(5);
	Print("Hello");
	Print(5.5f);
	Print<int>(18);

	std::cin.get();
}