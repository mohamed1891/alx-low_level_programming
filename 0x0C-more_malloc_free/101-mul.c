#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define ERR_MSG "Error"

/**
 * is_digit - checks if all characters in a string are digits.
 * @s: char pointer to the string
 * Return: 1 if all characters are digits, 0 otherwise.
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - get the length of a string.
 * @s: char pointer to the string
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handle errors by printing an error message
 * and exiting with code 98.
 * Return: void
 */
void errors(void)
{
	printf("%s\n", ERR_MSG);
	exit(98);
}

/**
 * main - multiply two positive numbers provided as command-line arguments.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len, len1, len2, i, carry, digit1, digit2, *result, a = 0;

	/*Check the number of arguments and if they are valid positive integers.*/
	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	/*Calculate lengths and allocate memory for the result array.*/
	len1 = _strlen(s1);
	len2  = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	/* Initialize the result array to zero */
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	/* Perform multiplication algorithm. */
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	/* Print the result.*/
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			putchar(result[i] + '0');
	}
	if (!a)
		putchar('0')
	putchar('\n');
	/* Free the allocated memory. */
	free(result);
	return (0);
}
