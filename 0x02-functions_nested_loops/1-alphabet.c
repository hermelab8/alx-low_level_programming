#include "main.h"

/**
 *void - print_alphabet block has a void return type
 *
 * Return: void
 */
void print_alphabet(void)
{
	char Lcase;

	for (Lcase = 'a'; Lcase <= 'z'; Lcase++)
	{
		_putchar(Lcase);
	}
	_putchar('\n');
}