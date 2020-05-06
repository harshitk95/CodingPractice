#include <iostream>
#include <vector>
#include <algorithm>


/* Sequential Search seems easy enough to implement  */

// O(n)

/**********BINARY SEARCH **********/

// we need a sorted array here
bool binary_search(std::vector<int>& ar, int key) {

	if (ar.size() == 1) {
		if (key == ar[0]) {
			return true;
		}
		else {
			return false;
		}
	}

	// returns true/false for the key in the array
	
	int mid = ar.size() / 2;

	std::vector<int> left;
	for (int i = 0; i < mid; i++) {
		left.push_back(ar[i]);
	}
	std::vector<int> right;
	for (int j = mid; j < ar.size(); j++) {
		right.push_back(ar[j]);
	}
	if (key < ar[mid]) {
		return binary_search(left, key);
	}
	else {
		return binary_search(right, key);
	}
}

int main() {

	std::vector<int> ar = { 2,4,56,234,78,9,5,4,43,2,5 };

	std::sort(ar.begin(), ar.end());

	std::cout << binary_search(ar, 55);




	std::cin.get();
}