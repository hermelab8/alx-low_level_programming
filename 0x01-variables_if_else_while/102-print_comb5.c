#include <stdio.h>

/**
 * main - print two 2-digit numbers each digit with 0-99 range and non repititive
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fnum, snum;

	for (fnum = 0; fnum <= 98; fnum++)
	{
		for (snum = fnum + 1; snum <= 99; snum++)
		{
			putchar((fnum / 10) + '0');
			putchar((fnum % 10) + '0');
			putchar(' ');
			putchar((snum / 10) + '0');
			putchar((snum % 10) + '0');
			if (fnum == 98 && snum == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

