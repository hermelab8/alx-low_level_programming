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
	double DoubleVar;
	float FloatVar;

	printf("Byte size of char is- %d\n", sizeof(CharVar));
	printf("Byte size of int is- %d\n", sizeof(IntVar));
	printf("Byte size of double is- %d\n", sizeof(DoubleVar));
	printf("Byte size of double is- %d\n", sizeof(FloatVar));
	return (0);
}
