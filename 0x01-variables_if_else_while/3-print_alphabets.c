#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch, ar;

	ch = 'a';
	ar = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ar <= 'Z')
	{
		putchar(ar);
		ar++;
	}

	putchar('\n');

	return (0);
}
