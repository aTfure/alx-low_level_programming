#include <stdio.h>

/**
 * main - print size of the various types on the computer
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int intergerType;
	char charType;
	float floatType;
	long int logintType;
	long long int longlongintType;

	printf("Size of a char: %1d byte(s)\n", sizeof(charType));
	printf("Size of an int: %1d bytes(s)\n", sizeof(integerType));
	printf("Size of a long int: %1d byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %1d byte(s)\n", sizeof(floatType));

	return (0);
}
