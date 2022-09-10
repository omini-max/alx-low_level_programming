#include <stdio.h>
/**
 * main -program that prints the alphabets in lower case followed by a new line
 * you can only use putchar
 * Return: 0
 */
int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
		{
			l += 1;
		}
		else
		{
			putchar(l);
			l += 1;
		}
	}
	putchar('\n');
	return (0);
}
