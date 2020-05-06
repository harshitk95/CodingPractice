#include <iostream>
#include <chrono>
#include <thread>


struct Timer {
	std::chrono::time_point<std::chrono::steady_clock>start, end;
	std::chrono::duration<float> duration;

	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		std::cout << "Timer took " << duration.count()*1000 << "ms" << std::endl;
	}
};

void Function() {
	Timer timer;

	for (int i = 0; i < 100; i++) {
		std::cout << "Hello\n";
	}
}


int main() {

	Function();
	
	std::cin.get();
}