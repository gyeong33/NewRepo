#include <stdio.h>

void func(void) {
	int x = 10;
	printf(" in func : x = %d\n", x);
}

int main(void) {
	int x = 20;
	printf(" in main : x =%d\n", x);
	func();
	printf("in main : x = %d\n", x);
}