#include <stdio.h>

/**
 * main - 3 digit combo of 0 1 2 without repeatition
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s, t;

	for (f = 0; f < 8; f++)
	{
		for (s = f + 1; s < 9; s++)
		{
			for (t = s + 1; t < 10; t++)
			{
				putchar((f % 10) + '0');
				putchar((s % 10) + '0');
				putchar((t % 10) + '0');

				if (f == 7 && s == 8 && t == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
