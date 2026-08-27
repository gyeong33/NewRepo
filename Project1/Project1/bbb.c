#include <stdio.h>
int main() {
	double num1, num2;
	//두개의 실수 변수를 정의함

	printf("첫번째 숫자를 입력하세요: ");
	scanf_s("%lf", &num1); // scanf_s를 사용하여 MSVC의 C4996 경고를 피함
	printf("두번째 숫자를 입력하세요: ");
	scanf_s("%lf", &num2);
	/*scanf_s를 이용하는 이유?

	
	*/

	//저장된 두 숫자에 대한 연산을 수행하고 결과를 출력
	printf("덧셈 결과: %.2lf\n", num1 + num2); //%.2lf 란? 서식 지정자. 소수점 이하 2자리까지 출력하겠다는 의미.
	printf("뺄셈 결과: %.2lf\n", num1 - num2);
	printf("곱셈 결과: %.2lf\n", num1 * num2);
	printf("나눗셈 결과: %.2lf\n", num1 / num2);


	return 0;
}
