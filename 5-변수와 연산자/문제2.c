#include<stdio.h>

int main(void)
{
	double num1, num2;
	printf("두개의 실수 입력 : ");
	scanf_s("%1f %1f", &num1, &num2);

	printf("두수의 덧셈: %f \n", (double)num1+(double)num2);
	printf("두수의 뺼셈: %f \n", (double)num1 - (double)num2);
	printf("두수의 곱셈: %f \n", (double)num1 * (double)num2);
	printf("두수의 나눗셈: %f \n", (double)num1 / (double)num2);
	return 0;
}
