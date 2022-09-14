#include "main.h"
/**
 * _abs - prints absolute value
 *
 * @n: number to check
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	else
	{
		n = n * 1;
	}
	return (n);
}
