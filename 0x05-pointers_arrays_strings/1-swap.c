#include "main.h"
#include <stdio.h>

/**
 * swap_int - takes two pointers to integer as parameter
 * @a: integer one
 * @b: integer two
 *
 * Return: Always(success) 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
