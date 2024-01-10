// stdio.h -> header file, standard library of C that allows us to conduct input and output operations.
#include <stdio.h>

// stdlib.h -> header file, standard library of C that declares various utility functions like type conversions, memory allocation and algorithms.
#include <stdlib.h>
#include <iostream>

using namespace std;
void Malloc() {
	
	int* p = (int*)malloc(5 * sizeof(int));

	if (p == NULL) {
		printf("Failed to allocate memory");
		return;
	}
	*p = 5;

	printf("%d", *p);

	free(p);

	p = NULL;
}

void New() {

	// new -> not only allocate memory, but also ready to initialise as soon as it allocates.
	int* p = new int(5);

	cout << *p << endl;
	delete p;
	p = nullptr;
}

void NewArrays() {

	int* p = new int[5];

	for (int i = 0; i < 5; i++) {
		p[i] = i;
	}

	delete[]p;
}

void Strings() {

	char* p = new char[4];
	strcpy_s(p, 4,  "C++");

	cout << p << endl;
	delete[] p;
}

void TwoD() {

	int* p1 = new int[3];
	int* p2 = new int[3];

	int** pData = new int* [2];
	pData[0] = p1;
	pData[1] = p2;

	pData[0][1] = 2;

	delete[]p1;
	delete[]p2;

	delete[] pData;
}

int main() {
	
	New();
	NewArrays();
	Strings();

	return 0;
}
