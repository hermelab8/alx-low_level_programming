#include <stdio.h>

/**
 *main - print out byte sizes of various types
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char CharVar;
	int IntVar;
	long int LongVar;
	long long int LongLongVar;
	float FloatVar;

	printf("Size of a char: %d byte(s)\n", sizeof(CharVar));
	printf("Size of an int: %d byte(s)\n", sizeof(IntVar));
	printf("Size of a long int: %d byte(s)\n", sizeof(LongVar));
	printf("Size of a long long int: %d byte(s)\n", sizeof(LongLongVar));
	printf("Size of a float: %d byte(s)\n", sizeof(FloatVar));
	return (0);
}
