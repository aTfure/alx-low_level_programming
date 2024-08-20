#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
