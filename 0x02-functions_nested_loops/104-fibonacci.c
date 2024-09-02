#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */

int main(void)
{
	unsigned long first_low = 1, second_low = 2;

	unsigned long first_high = 0, second_high = 0;

	unsigned long low, high;

	int count;

	printf("%lu, %lu", first_low, second_low);

	for (count = 3; count <= 98; count++)
	{
		low = first_low + second_low;
		high = first_high + second_high;

		if (low >= 1000000000)
		{
			high += low / 1000000000;
			low = low % 1000000000;
		}

		printf(", ");

		if (high > 0)
			printf("%lu%09lu", high, low);
		else
			printf("%lu", low);

		first_low = second_low;
		first_high = second_high;
		second_low = low;
		second_high = high;
	}

	printf("\n");

	return (0);
}
