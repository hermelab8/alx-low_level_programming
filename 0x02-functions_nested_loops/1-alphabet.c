#include "main.h"

/**
 *main- print_alphabet block has a void return type
 *
 *Return: Always void (Success)
 */
void print_alphabet(void)
{
	/**
	 * function prints lower case abc
	 */
	char Lcase;

	for (Lcase = 'a'; Lcase <= 'z'; Lcase++)
	{
		_putchar(Lcase);
	}
	_putchar('\n');
}
