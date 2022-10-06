#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp - a program that compares strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = strcmp(s1, s2);
	if (i != 0)
	{
		return (i);
	}
	return (0);
}
