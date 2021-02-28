#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function with arguments argc and argv.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if argc > 1, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	/*int coin_value[] = {25, 10, 5, 2, 1};*/
	/*int i = 0, result = 0;*/

	if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
			printf("0\n");
		else
		{
			printf("result\n");
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
