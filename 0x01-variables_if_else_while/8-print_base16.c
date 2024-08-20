#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always(Success)
 */

int main(void)
{
	int base_16;

	base_16 = 0;

	while (base_16 <= 9)
	{
		putchar(base_16 + '0');
		base_16++;
	}

	base_16 = 5;

	while (base_16 >= 0)
	{
		putchar(base_16 + 'a');
		base_16--;
	}

	putchar('\n');

	return (0);
}
