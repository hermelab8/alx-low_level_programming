#include <stdio.h>
#include<unistd.h>

/**
 * main- print to standard error stderr
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, str, sizeof(str));
	return (1);
}
