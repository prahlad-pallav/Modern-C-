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

int main() {
	
	New();

	return 0;
}
