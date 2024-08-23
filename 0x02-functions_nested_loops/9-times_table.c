#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 *
 * Return: results of the multiplication
 */

void times_table(void)
{
	int t;

	int result;

	int product;

	for (t = 0; t <= 9; t++)
	{
		for (result = 0; result <= 9; result++)
		{
			product = t * result;

			if (product >= 10)
			{
				_putchar((product / 10) + '0');
			}

			else
			{
				_putchar(' ');
			}

			_putchar((product % 10) + '0');

			if (result != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
