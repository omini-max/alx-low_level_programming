#include <stdio.h>

/**
 * main - program that prints lower case letters in reverse then a new line.
 * putchar can only be used twice
 * all program must be in main
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0)
}
