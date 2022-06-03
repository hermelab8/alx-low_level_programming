#include <stdio.h>

/**
 * main - two digit with char combo
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int f, s;

	for (f = 0; f <= 9; f++)
	{
		for (s = f + 1; s <= 9; s++)
		{
			putchar((f % 10) + '0');
			putchar((s % 10) + '0');

			if (f == 8 && s == 9)
				continue;
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
