#include <stdio.h>

/**
 * main - program that prints _putchar
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_g[8] = "_putchar";

	while (n < 8)
	{
		putchar(str_g[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
