#include <stdio.h>

/**
 * main - Using pointer arithmetics to modify the value of array
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;

	printf("Initial values:\n");
	printf("a[0]: %d\n", a[0]);
	printf("a[1]: %d\n", a[1]);
	printf("a[2]: %d\n", a[2]);
	printf("a[3]: %d\n", a[3]);
	printf("a[4]: %d\n", a[4]);

	p = a + 1;
	*p = 98;

	printf("\nAfter modifying a[1] via a pointer p:\n");
	printf("a[0]: %d\n", a[0]);
	printf("a[1]: %d\n", a[1]);
	printf("a[2]: %d\n", a[2]);
	printf("a[3]: %d\n", a[3]);
	printf("a[4]: %d\n", a[4]);

	p2 = a + 3;
	*p2 = *p + 1337;

	printf("\nAfter modyfing a[3] via a pointer p2:\n");
	printf("a[0]: %d\n", a[0]);
	printf("a[1]: %d\n", a[1]);
	printf("a[2]: %d\n", a[2]);
	printf("a[3]: %d\n", a[3]);
	printf("a[4]: %d\n", a[4]);

	return (0);
}
	
