#include <iostream>
using namespace std;

// namespace provide a way for preventing name conflicts in bigger projects.
// namespace can be nested inside another namespace

namespace Sum {
	int calculate(int a, int b) {
		return a + b;
	}
}

namespace Mult {
	int calculate(int a, int b) {
		return a * b;
	}
}

namespace Sort {

	void Quicksort() {
		cout << "Inside QuickSort" << endl;
	}

	void MergeSort() {
		cout << "Inside MergeSort" << endl;
	}

	void InsertionSort() {
		cout << "Inside InsertionSort" << endl;
	}

	namespace Comparsion {
		void Lesser() {
			cout << "Inside Lesser" << endl;
		}

		void Greater() {
			cout << "Inside Greater" << endl;
		}
	}
}

namespace {
	void InternalFunction() {
		cout << "Inside internalFunction" << endl;
	}
}

int main() {

	cout << "Using namespace Add: " << Sum::calculate(3, 4) << endl;

	cout << "Using namespace Mult: " << Mult::calculate(3, 4) << endl;

	Sort::InsertionSort();

	Sort::Comparsion::Greater();

	InternalFunction();


	return 0;
}
