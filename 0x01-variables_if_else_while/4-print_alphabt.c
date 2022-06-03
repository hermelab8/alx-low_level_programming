#include <stdio.h>

/**
 *main - print lowercase alphabet except q and e
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != 'e' && lcase != 'q')
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
