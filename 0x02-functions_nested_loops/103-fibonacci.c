#include <stdio.h>

/**
 * main- print even numbers from n=10 fibonacci series
 *
 *Return: Always 0.
 */
int main(void)
{
	long int c, current, next, fib;

	current = 0;
	next = 1;

	fib = current + next;

	for (c = 0; c < 10; c++)
	{
		if (c == 9 && (fib % 2) == 0)
		{
			printf("%ld\n", fib);
		}
		else if ((fib % 2) == 0)
		{
			printf("%ld ", fib);
		}
		current = next;
		next = fib;
		fib = current + next;
	}
	return (0);
}
