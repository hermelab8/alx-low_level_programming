#include "main.h"

/**
 * jack_bauser- prints every minute of a day
 *
 * Return: void on success
 */
void jack_bauer(void)
{
	int Hh, Mm;

	for ( Hh = 0; Hh < 24; Hh++)
	{
		for ( Mm = 0; Mm < 60; Mm++)
		{
			_putchar((Hh / 10) + '0');
			_putchar((Hh % 10) + '0');
			_putchar(':');
		        _putchar((Mm / 10) + '0');
			_putchar((Mm % 10) + '0');
			_putchar('\n');
		}
	}
}
