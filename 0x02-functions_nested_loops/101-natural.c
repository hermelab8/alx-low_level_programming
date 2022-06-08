#include <stdio.h>

/**
 * main- computes sum of multiples of 3 and 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, M_sum;

	M_sum = 0;

	for (c = 1; c < 1024; c++)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
		{
			M_sum = M_sum + c;
		}
	}
	printf("%d\n", M_sum);
	return (0);
}
