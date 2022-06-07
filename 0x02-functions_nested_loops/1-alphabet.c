#include "main.h"

/**
 *print_alphabet - print_alphabet block has a void return type
 *
 *Return: void on success
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
