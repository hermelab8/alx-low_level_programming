#include "main.h"

/**
 * print_sign- prints number sign
 * @n: The number to be checked
 *
 * Return: 1 on positive, 0 on 0 and -1 on negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
