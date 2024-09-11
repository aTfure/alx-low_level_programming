#include "main.h"
#include <stdio.h>

/**
 * _puts - function takes a pointer to a string as input
 * @str: the pointer as input
 *
 * Return: print the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
