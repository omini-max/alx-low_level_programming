#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - write a function that prints string in reverse
 * @s: string to check
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	i = strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
