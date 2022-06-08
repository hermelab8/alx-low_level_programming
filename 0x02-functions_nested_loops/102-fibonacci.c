#include <stdio.h>

/**
 * main- the first 50 terms in the fibonacci series
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, current, next, fib;

		current = 0;
		next = 1;
		fib = current + next;

		for (c = 0; c < 50; c++)
		{
			if (c < 50)
			{
				printf("%d, ", fib);
			}
			else
			{
				printf("%d\n", fib);
			}
			current = next;
			next = fib;
			fib = current + next;
		}
	return (0);
}
