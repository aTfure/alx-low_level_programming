#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: character to check
 *
 * Return: output
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
