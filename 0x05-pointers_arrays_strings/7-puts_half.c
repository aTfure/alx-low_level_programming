#include "main.h"
#include <stdio.h>

/**
 * puts_half - function to print half of a string
 * @str: pointer to the string character
 *
 * Return: expected output
 */

void puts_half(char *str)
{
	int len;
	int start;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	i = start;
	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
