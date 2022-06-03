#include <stdio.h>

/**
 *main - print lowercase alphabet except q and e
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase < 'e'; lcase++)
	{
		putchar(lcase);
	}
	for (lcase = 'f'; lcase < 'q'; lcase++)
	{
		putchar(lcase);
	}
	for (lcase = 'r'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
