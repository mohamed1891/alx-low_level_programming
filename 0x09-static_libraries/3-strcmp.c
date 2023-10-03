#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -tve if s1<s2, +tve if s1>s2, 0 if s1==st
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
