#include <stdio.h>
#include <string.h>
#include "main.h"
/*
 * _strcat - appends src to the dest string
 * @dest: strung to be concatenated
 * @src: string to be concatenated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);

	return (dest);
}
