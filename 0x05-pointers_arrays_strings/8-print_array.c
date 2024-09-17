#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: a pointer to an array of integers
 * @n: number of elements
 *
 * Return: expected output
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
