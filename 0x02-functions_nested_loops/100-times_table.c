#include "main.h"

/**
 * print_times_table- prints times table for n
 *@n: function argument
 *
 * Return: void
 */
void print_times_table(int n)
{
	int d, m, prod;

	if (n <= 15 && n >= 0)
	{
		for (d = 0; d <= n; d++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				prod = d * m;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
