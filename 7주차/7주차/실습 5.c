#include <stdio.h>

void func(void) {
	static int x;  // static 변수는 초기화 하지 않으면 자동으로 0으로 초기화 된다.
	printf("in func : x = %d\n", x);
	x++;
	printf("after x++ : x=%d\n", x);
}

int main(void) {
	func();
	func();
}
