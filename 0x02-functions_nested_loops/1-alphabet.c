#include "main.h"

/**
 *main- print_alphabet block has a void return type
 *Description: print_alphabet prints lowercase abc
 *Return: Always void (Success)
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
