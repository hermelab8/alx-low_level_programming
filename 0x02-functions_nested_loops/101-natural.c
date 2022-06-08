#include <stdio.h>

/**
 * main- computes sum of multiples of 3 and 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int c,t_sum,f_sum,M_sum;

	c = 0;

	for (c = 0; c < 1024; c++)
	{
		t_sum = 0;
		f_sum = 0;

		if ((c % 3) == 0)
		{
			t_sum = c + t_sum;
		}
		else if ((c % 5) == 0)
		{
			f_sum = c + f_sum;
		}
		else continue;
	}
	M_sum = t_sum + f_sum;
	printf("%d\n", M_sum);
	return (0);
}
