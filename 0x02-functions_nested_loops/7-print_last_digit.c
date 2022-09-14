#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 * Return: n
 */
int print_last_digit(int n)
{
	n = _abs(n);
	return (n % 10);
}

