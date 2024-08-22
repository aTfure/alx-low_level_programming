#include "main.h"

/**
 * _islower - check for lowercase characters
 * @c: the character to check
 *
 * Return: void
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
