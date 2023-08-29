#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: string to be appended
 * @src: string to append
 * @n: no. of bytes from srs to use
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (a = 0; (a < n) && (src[a] != '\0'); a++)
	{
		dest[i + a] = src[a];
	}
	dest[i + a] = '\0';
	return (dest);
}
