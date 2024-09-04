#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer used
 *
 * Return: output
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
