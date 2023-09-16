#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 2;

	printf("Please enter a number: ");
	scanf("%d", &num);

	while (i < num)
	{
		if (num % i == 0)
			break;
		i++;
	}

	if (i == num)
		printf("It is a prime number.");
	else
		printf("It is not a prime number");

	return 0;
}