#include "main.h"

/**
 * _strpbrk - function that searches a string
 * @s: tring to search
 * @accept: character to search for
 *
 * Return: s if found and NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
