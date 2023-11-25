#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

double deviation(double* param)
{
	double avg = 0, sum = 0, deviation = 0;

	for (int i = 0; i < 5; i++)
		avg += param[i];
	avg /= 5;

	for (int i = 0; i < 5; i++)
		sum += pow(param[i] - avg, 2);

	deviation = sqrt(sum / 5);
	return deviation;
}

int main(void)
{
	double arr[5];

	printf("Enter 5 real numbers: ");

	for (int i = 0; i < 5; i++)
		scanf("%lf", &arr[i]);

	printf("Sandard Deviation = %lf", deviation(arr));

	return 0;
}