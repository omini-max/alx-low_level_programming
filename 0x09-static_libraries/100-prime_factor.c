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
	int long n = 612852475143;
	long int a = sqrt(n);

	while (1)
	{
		if (n % a == 0)
		{
			printf("%ld\n", n / a);
			break;
		}
		a--;
	}
	return (0);
}
