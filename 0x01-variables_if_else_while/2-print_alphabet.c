#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lower case followed by a new line
 * you cn only use the putchar twice
 * Return: 0
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a += 1;
	}
	putchar('\n');
	return (0);
}
