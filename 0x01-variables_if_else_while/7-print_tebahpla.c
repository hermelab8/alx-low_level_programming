#include <stdio.h>
/**
 * main - reverse print the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lcase;

	for (lcase = 'z'; lcase >= 'a'; lcase--)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
