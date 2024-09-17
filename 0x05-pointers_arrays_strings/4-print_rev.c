#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: character used
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
