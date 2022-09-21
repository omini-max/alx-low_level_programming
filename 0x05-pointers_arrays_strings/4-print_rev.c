#include <stdio.h>
#include "main.h"
/**
 * print_rev - program to print string in reverse
 * @s: string to check
 * Return: void
 */
void print_rev(char *s)
{
	int p;

	p = strlen(s);
	int i = p - 1;
	while (i != 0)
	{
		_puthchar('s[i]');
		i--;
	}
	_putchar('\n')
}
