#include <stdio.h>
/**
 * main - print 0- 15 in hex
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s_num;
	char alpha;

	for (s_num = 0; s_num <= 9; s_num++)
	{
		putchar((s_num % 10) + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
