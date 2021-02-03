#include <stdio.h>

/**
 * main - Entry point
 *
 *char charType
 *int intType
 *long int longintType
 *long long int longlongintType
 *float floatType
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

	printf("Size of char: %lu byte", sizeof(charType));
	printf("Size of int: %lu bytes", sizeof(intType));
	printf("Size of long int: %lu bytes", sizeof(longintType));
	printf("Size of long long int: %lu bytes", sizeof(longlongintType));
	printf("Size of float: %lu bytes", sizeof(floatType));

	return (0);
}
