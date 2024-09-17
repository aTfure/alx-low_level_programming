#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function to copy string
 * @dest: pointer to the destination buffer
 * @src: a pointer to the source string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
