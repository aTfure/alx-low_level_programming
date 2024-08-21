#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always(Success)
 */


int main(void)
{
	int single_digit;

	single_digit = 0;

	while (single_digit <= 10)
	{
		putchar(single_digit + '0');
		single_digit++;

		if (single_digit < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
