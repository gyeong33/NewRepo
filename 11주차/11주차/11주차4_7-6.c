#include <stdio.h>

#define SIZE 3

int main(void) {
	int a[SIZE] = { 100, 200, 300 };
	int b[SIZE] = {40, 50, 60};
	int c[SIZE];

	for(int i=0;i<SIZE;i++)
		c[i] = a[i] + b[i];

	printf("¹è¿­c: ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", c[i]);
}