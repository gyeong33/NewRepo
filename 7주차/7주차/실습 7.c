#include <stdio.h>
#include <stdlib.h>

int main(void) {
	srand(3234);
	printf("난수 1: %d\n", rand());
	srand(3234);
	printf("난수 2: %d\n", rand());
	srand(1000);
	printf("난수 2: %d\n", rand());
	printf("RAND_MAX: %d\n", RAND_MAX);
}