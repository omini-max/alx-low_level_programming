#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet, new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
