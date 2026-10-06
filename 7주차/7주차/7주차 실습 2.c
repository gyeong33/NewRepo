#include <stdio.h>

int get_max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}	
}

int main(void) {
	printf("max of 2 and 5 is %d\n", get_max(2,5));
	printf("max of 12 and 5 is %d\n", get_max(12, 5));
	printf("max of 5,99,33 is %d\n", get_max(get_max(5, 99), 33));
	return 0;
}