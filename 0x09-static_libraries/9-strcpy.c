#include "main.h"

/**
 * char *_strcpy - copy str to src
 * @dest: string destination
 * @src: src directory
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
