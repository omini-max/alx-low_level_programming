#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a;
	char alpha;
	for (a = '0'; a <= '9'; a++)
	putchar(a);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	putchar(alpha);
	putchar('\n');
	return (0);
}
