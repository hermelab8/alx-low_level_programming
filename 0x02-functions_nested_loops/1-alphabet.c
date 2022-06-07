#include "main.h"

/**
 *main- print_alphabet block has a void return type
 *
 *Return: Always void (Success)
 */
/**
 * print_alphabet() prints lower case abc
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
