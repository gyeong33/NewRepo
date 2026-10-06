#include <stdio.h>

// 함수 정의
void print_chars(char ch, int n) {
	int i = 0;

	for (int i = 0; i < n; i++)
		printf("%c", ch); //ch 문자를 n번 출력
	printf("\n");
}

int main(void) {
	print_chars('*', 50);
	print_chars('#', 30);
	return 0;
}