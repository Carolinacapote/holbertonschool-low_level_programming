#include <stdio.h>

/**
 * main - Entry point
 *
 *sizeof charType
 *sizeof intType
 *sizeof longintType
 *sizeof  longlongintType
 *sizeof floatType
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %lu byte", sizeof(charType));
	printf("Size of an int: %lu bytes", sizeof(intType));
	printf("Size of a long int: %lu bytes", sizeof(longintType));
	printf("Size of a long long int: %lu bytes", sizeof(longlongintType));
	printf("Size of a float: %lu bytes", sizeof(floatType));

	return (0);
}
