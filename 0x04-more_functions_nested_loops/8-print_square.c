#include "main.h"

/**
 * print_square - prints a square followed
 * by a new line
 * @size: the integer used
 *
 * Return: output
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		for (i = 0; i < size; i++)
		{
			int j;

			j = 0;
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
