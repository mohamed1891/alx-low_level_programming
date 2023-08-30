#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int i, c, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1, sum = 0; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (argv[i][c] < '0' || argv[i][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
