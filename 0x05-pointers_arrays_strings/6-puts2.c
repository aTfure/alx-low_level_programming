#include "main.h"
#include <stdio.h>

/**
 * puts2 - function to print every other character of a string
 * @str: character used
 *
 * Return: output
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
