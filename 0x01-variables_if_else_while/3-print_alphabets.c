#include <stdio.h>
/**
 * main - program that prints the alphabet in lower case, then in upper case
 * you can only use the putchar
 * Return: 0
 */

int main(void)
{
	int l = 'a';
	int u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l += 1;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u += 1;
	}
	putchar('\n');
	return (0);
}
