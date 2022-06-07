#include "main.h"

/**
 * main - uses the print_alphabet function to print lower case ABC
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	for (i = 97; i < 128; i++)
	{
		print_alphabet(i);
	}
	_putchar('\n');
	return (0);
}
