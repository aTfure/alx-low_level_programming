#include "main.h"

/**
 * more_numbers - prints 10 times the number
 * from 0 to 14
 *
 * Return: output
 */

void more_numbers(void)
{
	int i, j;

	i = 1;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
