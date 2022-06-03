#include <stdio.h>

/**
 * main - print 0-9 separated with ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s_num;

	for (s_num = 0; s_num <= 9; s_num++)
	{
		putchar((s_num % 10) + '0');
		if (s_num == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

