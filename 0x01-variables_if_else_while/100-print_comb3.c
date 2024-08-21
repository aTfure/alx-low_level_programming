#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always(Success)
 */

int main(void)
{
	int two_digit, two_digit2;

	two_digit = 0;

	while (two_digit <= 9)
	{
		two_digit2 = two_digit + 1;

		while (two_digit2 <= 9)
		{
			putchar(two_digit + '0');
			putchar(two_digit2 + '0');

			if (two_digit != 8 || two_digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}

			two_digit2++;
		}

		two_digit++;
	}

	putchar('\n');

	return (0);
}
