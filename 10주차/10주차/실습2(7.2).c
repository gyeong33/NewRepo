#include <stdio.h>

int main(void) {
	int s[] = { 31, 63, 62, 87, 14 };

	printf("s = %d\n", s);

	for (int i = 0; i < 5; i++)
		printf("s[%d] = %d\n", i, s[i]);

	// -----------------------------------------------


	return 0;
}