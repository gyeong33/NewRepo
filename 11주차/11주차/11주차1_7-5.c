#include <stdio.h>

#define SIZE 3

int main(void) {
	int m[SIZE] = { 10, 20, 30 }, n[SIZE] = { 10, 20, 30 };

	printf("m狼 林家: %p\n", m);
	printf("n狼 林家: %p\n", n);
	return 0;
}