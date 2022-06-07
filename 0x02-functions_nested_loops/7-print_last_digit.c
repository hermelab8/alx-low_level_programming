#include "main.h"


/**
 * print_last_digit- prints last digit of a number
 * @n: function argument
 *
 * Return: on success
 */
int print_last_digit(int n)
{
	int LDigit;

	LDigit = n % 10;

	if (LDigit < 0)
	{
		LDigit = LDigit * -1;
		_putchar(LDigit + '0');
	}
	else
	{
		_putchar(LDigit + '0');
	}
	return (LDigit);
}
