#include <stdio.h>

#include <math.h>

/**
 * main - prime numbers
 *
 *
 *
 * Return: 0
 */

int main(void)
{
	unsigned int long n = 612852475143, a = (int) sqrt(n);
	int i;

	while (1)
	{
		if ((n % a) == 0)
		{
			for (i = (a - 1); i <= 2; i--)
			{
				if ((a % i) != 0)
				{
					printf("%lu \n", a);
					break;
				}
			}
		}
		a--;
	}
	return (0);
}
