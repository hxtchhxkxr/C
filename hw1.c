#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Input two integers : ");
	scanf_s("%d %d", &num1, &num2);

	int result_and = num1 & num2;
	int result_or = num1 | num2;
	int result_xor = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, result_and);
	printf("%d | %d = %d \n", num1, num2, result_or);
	printf("%d ^ %d = %d \n", num1, num2, result_xor);

	return 0;
}