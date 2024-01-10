// stdio.h -> header file, standard library of C that allows us to conduct input and output operations.
#include <stdio.h>

// stdlib.h -> header file, standard library of C that declares various utility functions like type conversions, memory allocation and algorithms.
#include <stdlib.h>

int main() {
	
	// in cpp -> type casting required
	int* p = (int *)malloc(sizeof(int));
	*p = 5;

	printf("%d", *p);

	// dangling pointer -> pointer that points to a memory location that has been deallocated or no longer valid
	free(p);

	p = NULL;

	return 0;
}
