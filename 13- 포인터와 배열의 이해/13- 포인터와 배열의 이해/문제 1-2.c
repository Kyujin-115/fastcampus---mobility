#include <stdio.h>

int main_d(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* fptr = &arr[0];
	int* bptr = &arr[5];
	int temp;

	for (int i = 0; i < 3; i++)
	{
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;
		bptr--;
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}