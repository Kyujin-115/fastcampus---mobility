#include <stdio.h>

int main_b(void)
{
	int dan = 0, num = 1;
	printf("�� ��?");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d X %d=%d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}