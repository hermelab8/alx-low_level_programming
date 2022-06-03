#include <stdio.h>

/**
 * main - print 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int s_num;

	for (s_num = 0; s_num <= 9; s_num++)
	{
		printf("%d", s_num);
	}
	putchar('\n');
	return (0);
}

