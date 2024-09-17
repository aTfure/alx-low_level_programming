#include "main.h"
#include <stdio.h>

/**
 * _atoi - function of converting a string to an integer
 * @s: pointer to a an char
 *
 * Return: expected output
 */

int _atoi(char *s)
{
	int result;
	int sign;
	int found_digit;

	result = 0;
	sign = 1;
	found_digit = 0;
	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
