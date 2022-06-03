#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *
 * main - print last digit of a number
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int LDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);
	LDigit = n % 10;

	if (LDigit > 5)
	{
		printf("Last digit of, %d, is, %d, and is greater than 5", n, LDigit);
	}
	else if (LDigit == 0)
	{
		printf("Last digit of, %d, is, %d, and is 0", n, LDigit);
	}
	else
	{
		printf("Last digit of, %d, is, %d, and is less than 6 and not 0", n, LDigit);
	}
	return (0);
}
