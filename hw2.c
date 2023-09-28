#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{
	float kilometers;
	float miles;
	printf("Please enter kilometers: ");
	scanf("%f", &kilometers);
	miles = kilometers / 1.609;
	printf("%.1f km is equal to %.1f miles. \n", kilometers, miles);
	return 0;
}

