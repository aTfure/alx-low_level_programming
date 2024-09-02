#include <stdio.h>

/**
 * main - The program run
 *
 * Return: 0 Always
 */

int main(void)
{
	int sum, i;

	sum = 0;

	i = 1;

	for (i = 1; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}

	printf("%d\n", sum);

	return (0);
}
