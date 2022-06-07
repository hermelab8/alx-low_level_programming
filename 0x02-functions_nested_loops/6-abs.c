#include "main.h"

/**
 * _abs- computes absolute value
 * @x: function argument
 *
 * Return: 0 on success
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		x = x * -1;
		return (x);
	}
}
