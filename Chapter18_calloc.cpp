// stdio.h -> header file, standard library of C that allows us to conduct input and output operations.
#include <stdio.h>

// stdlib.h -> header file, standard library of C that declares various utility functions like type conversions, memory allocation and algorithms.
#include <stdlib.h>

int main() {
	
	// in cpp -> type casting required
	// malloc -> doesnot initialise the memory
	// calloc -> initialise the memory to zero

	int* p = (int *)calloc(1, sizeof(int));
	//int* p = (int *)calloc(5, sizeof(int));

	if (p == NULL) {
		printf("Failed to allocate memory");
		return -1;
	}
	*p = 5;

	printf("%d", *p);

	// dangling pointer -> pointer that points to a memory location that has been deallocated or no longer valid
	free(p);

	p = NULL;

	return 0;
}
