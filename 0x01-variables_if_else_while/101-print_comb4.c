#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always(Success)
 */

int main(void)
{
	int three_digit, three_digit2, three_digit3;

	three_digit = 0;

	while (three_digit <= 9)
	{
		three_digit2 = three_digit + 1;

		while (three_digit2 <= 9)
		{
			three_digit3 = three_digit2 + 1;

		while (three_digit3 <= 9)
		{
			putchar(three_digit + '0');
			putchar(three_digit2 + '0');
			putchar(three_digit3 + '0');

			if (three_digit != 8 || three_digit != 9 || three_digit != 7)
			{
				putchar(',');
				putchar(' ');
			}

			three_digit3++;
		}

		three_digit2++;
		}

		three_digit++;
	}

	putchar('\n');

	return (0);
}
