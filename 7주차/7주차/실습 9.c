#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50
#define RANGE 100

int main(void) {
	int i;
	srand(time(NULL));

	for (i = 0; i < SIZE; i++)
		printf("%d ", rand() % RANGE + 1);
}