#include <stdio.h>

/**
 * main- the first 50 terms in the fibonacci series
 *
 * Return: Always 0.
 */
int main(void)
{
	long int c, current, next, fib;

		current = 0;
		next = 1;
		fib = current + next;

		for (c = 0; c < 50; c++)
		{
			if (c == 50)
			{
				printf("%ld\n", fib);
			}
			else
			{
				printf("%ld, ", fib);
			}
			current = next;
			next = fib;
			fib = current + next;
		}
	return (0);
}
