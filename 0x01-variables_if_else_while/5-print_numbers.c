#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10 starting
 * all code should be in main function
 * Return: 0
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	printf("\n");
	return (0);
}
