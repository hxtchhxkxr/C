#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int decimal_to_binary(int num)
{
	if (num == 0 || num == 1)
		printf("%d", num);
	else
	{
		decimal_to_binary(num / 2);
		printf("%d", num % 2);
	}
	return 0;
}
void main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	decimal_to_binary(num);
	return 0;
}