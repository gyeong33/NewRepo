#include <stdio.h>

int x = 20;

void func(void) {
	x = 10;
	printf("in func : x = %d\n", x);
}

int main(void) {
	printf("in main : x = %d\n", x);
	func();
	printf("in main : x = %d\n", x);
}