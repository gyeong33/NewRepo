#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	long int t = time(NULL);

	srand(t);
	printf("time(NULL) = %ld\n", t);
	printf("난수 1: %d\n", rand());
	printf("난수 2: %d\n", rand());
}