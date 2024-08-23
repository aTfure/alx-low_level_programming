#include "main.h"

/**
 * print_sign - prints sign of numbers
 * @n: the character to check
 *
 * Return: 1 if greater than zero, 0 if zero and -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return(0);
	}
}
