#include <stdio.h>

/**
 *main - print lowercase alphabet followed by uppercase
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char lcase;
	char ucase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	for (ucase = 'A'; ucase <= 'Z'; ucase++)
	{
		putchar(ucase);
	}
	putchar('\n');
	return (0);
}
