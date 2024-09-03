#include "main.h"
/**
 * positive_or_negative - check if the number is
 *
 * @i: character used
 *
 * Return: possible output
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
