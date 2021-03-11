#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Takes arguments argc and argv to execute the program.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int calc, num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	f = get_op_func(operator);
	calc = f(num1, num2);
	printf("%d\n", calc);
	return (0);
}
