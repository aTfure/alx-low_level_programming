#include <stdio.h>

/**
 * modify_my_char_var - modify the char and pointer value
 *
 * Return: nothing
 */

void modify_my_char_var(char *cc, char ccc)
{
	printf("Inside modify_my_char_var:\n");
	printf("Before modification: *cc = %c, ccc = %c\n", *cc, ccc);

	*cc = 'o';
	ccc = 'l';

	printf("After modification: *cc = %c, ccc = %c\n", *cc, ccc);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Before function call:\n");
	printf("c = %c, *p = %c\n", c, *p);

	modify_my_char_var(p,c);

	printf("After function call:\n");
	printf("c = %c, *p = %c\n", c, *p);

	return (0);
}
