#include "main.h"

/**
 * _isalpha- checks whether a charcter is a letter
 * @c: The character to check
 *
 * Return: 1 on success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	return (0);
}
