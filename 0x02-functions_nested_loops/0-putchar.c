#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * _putchar - program that prints _putchar
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char *str = "_putchar";

	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}
