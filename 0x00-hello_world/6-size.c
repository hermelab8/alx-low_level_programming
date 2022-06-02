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

	printf("Byte size of char is- %d\n", sizeof(CharVar));
	printf("Byte size of int is- %d\n", sizeof(IntVar));
	printf("Byte size of long int is- %d\n", sizeof(LongVar));
	printf("Byte size of long long int is- %d\n", sizeof(LongLongVar));
	printf("Byte size of float is- %d\n", sizeof(FloatVar));
	return (0);
}
