#include <stdio.h>

int main(void) {
	int a = 10;
	int* p = &a;

	printf("변수 a의 값: %d\n", a);
	printf("변수 a의 메모리 주소 : %p\n", &a);
	printf("포인터 p의 값: %p\n", p);
	printf("포인터 p가 가리키는 값: %d\n", *p);
}