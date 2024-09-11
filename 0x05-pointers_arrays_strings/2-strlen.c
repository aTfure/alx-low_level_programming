#include "main.h"
#include <stdio.h>

/**
 * _strlen - function to return the lenght of a string
 * @s: a pointer to a string input
 *
 * Return: total number of characters
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
