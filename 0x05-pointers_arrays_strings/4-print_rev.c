#include <stdio.h>
#include "main.h"
/**
 * print_rev - program to print string in reverse
 * @s: string to check
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
