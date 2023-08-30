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
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1, sum = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
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
