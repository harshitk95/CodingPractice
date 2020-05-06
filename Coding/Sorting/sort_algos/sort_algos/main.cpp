#include <iostream>
#include <vector>

/*************SELECTION SORT**********************/
void selection_sort(std::vector<int>& ar) {
	for (int i = 0; i < ar.size(); i++) {
		int min_ind = i;
		for (int j = i + 1; j < ar.size(); j++) {
			if (ar[j] < ar[min_ind]) {
				min_ind = j;
			}
		}
		if (min_ind != i) {
			int temp = ar[i];
			ar[i] = ar[min_ind];
			ar[min_ind] = temp;
		}
	}
}

/*************INSERTION SORT**********************/
void insertion_sort(std::vector<int>& ar) {
	for (int i = 1; i < ar.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (ar[i] < ar[j]) {
				int temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}

/*************MERGE SORT**********************/

std::vector<int> merge(std::vector<int> a, std::vector<int> b) {
	std::vector<int> merged_vector;
	int i = 0, j = 0; // we start two counters

	while (i < a.size() && j < b.size()) {
		if (a[i] <= b[j]) {
			merged_vector.push_back(a[i]);
			i++;
		}
		else {
			merged_vector.push_back(b[j]);
			j++;
		}
	}
	if (i == a.size()) {
		while (j < b.size()) {
			merged_vector.push_back(b[j]);
			j++;
		}
	}
	if (j == b.size()) {
		while (i < a.size()) {
			merged_vector.push_back(a[i]);
			i++;
		}
	}

	return merged_vector;
}

void merge_sort(std::vector<int>& ar) {

	if (ar.size() > 1) {
		int mid = ar.size() / 2;
		std::vector<int> left;
		std::vector<int> right;
		for (int i = 0; i < mid; i++) {
			left.push_back(ar[i]);
		}
		for (int j = mid; j < ar.size(); j++) {
			right.push_back(ar[j]);
		}

		merge_sort(left);
		merge_sort(right);
		ar = merge(left, right);
	}
	
}


/*******QUICK SORT*********/

//partitioning of the array around a pivot
void quick_sort(std::vector<int>& ar) {

	int pivot = ar[0]; // first element is the pivot
	std::vector<int> left;
	std::vector<int> right;

}

int main() {

	std::vector<int> ar = { 4,3,7,8,9,2,4,1 };


	//selection_sort(ar);
	
	//insertion_sort(ar);
	
	merge_sort(ar);
	
	
	for (int i = 0; i < ar.size(); i++) {
		std::cout << ar[i] << std::endl;
	}
	std::cin.get();
}