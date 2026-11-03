#include <stdio.h>

#define SIZE_A 3
#define SIZE_B 4
#define SIZE_C (SIZE_A + SIZE_B)

int main(void) {
	int a[SIZE_A] = { 10, 20, 30 };
	int b[SIZE_B] = { 10, 20, 30, 40 };
	int c[SIZE_C];
	

	for (int i = 0; i < SIZE_A; i++)
		c[i] = a[i];
	for (int i = 0; i < SIZE_B; i++)
		c[SIZE_A+i] = b[i];
	
	printf("¹è¿­ c: ");
	for(int i = 0; i < SIZE_C;i++)
		printf("%d ", c[i]);
}