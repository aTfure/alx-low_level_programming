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

			if (result != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10 && result != 0)
			{
				_putchar(' ');
			}

			if (product >= 10)
			{
				_putchar((product / 10) + '0');
			}

			_putchar((product % 10) + '0');
		}

		_putchar('\n');
	}
}
