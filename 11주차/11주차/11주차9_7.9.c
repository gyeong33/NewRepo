#include <stdio.h>

void func(int x[]) {
	x[0] = x[0] * 10;
	printf("in func : x[0] = % decltype \n",x[0]);
}

int main(void) {
	int a[] = { 20 };

	func(a);
	printf("in main : a[0] = %d \n", a[0]);
}
