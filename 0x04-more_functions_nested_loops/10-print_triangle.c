#include "main.h"

/**
 * print_triangle - prints triangle followed
 * by a new line
 * @size: integer to be used
 *
 * Return: output
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 1;
		for (i = 1; i <= size; i++)
		{
			int j, k;

			j = 0;
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}

			k = 0;
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
