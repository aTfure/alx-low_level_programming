#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always(Success)
 */

int main(void)
{
	int two_two_digit, two_two_digit2;

	two_two_digit = 0;

	while (two_two_digit <= 98)
	{
		two_two_digit2 = two_two_digit + 1;

		while (two_two_digit2 <= 99)
		{
			putchar((two_two_digit / 10) + '0');
			putchar((two_two_digit % 10) + '0');
			putchar(' ');
			putchar((two_two_digit2 / 10) + '0');
			putchar((two_two_digit2 % 10) + '0');

			if (two_two_digit != 98 || two_two_digit2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			two_two_digit2++;
		}
		two_two_digit++;
	}

	putchar('\n');

	return (0);
}
