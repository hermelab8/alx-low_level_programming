#include <stdio.h>

/**
 * main - use putchar to print an integer
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int s_num;

	for (s_num = 0; s_num <= 9; s_num++)
	{
		putchar((s_num%10) + '0');
	}
	putchar('\n');
	return (0);
}
