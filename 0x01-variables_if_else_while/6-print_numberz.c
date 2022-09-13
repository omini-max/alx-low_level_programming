#include <stdio.h>
/**
 * main- program that prints all digit numbers from base 10 starting from 0
 * you are not allowed to use any variable of type char
 * you can only use the putchar funcion
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
