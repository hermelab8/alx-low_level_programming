#include <stdio.h>

/**
 * main - print the lowercase alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
