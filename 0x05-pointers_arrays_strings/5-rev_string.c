#include "main.h"
#include <stdio.h>

/**
 * rev_string - function to reverse a string
 * @s: string used
 *
 * Return: the output
 */

void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
