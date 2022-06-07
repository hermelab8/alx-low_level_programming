#include "main.h"

/**
 * main- print to stdout using _putchar
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char print[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	_putchar(print[i]);
	}
	_putchar('\n');
	return (0);
}
