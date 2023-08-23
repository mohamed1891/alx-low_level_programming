#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */

void puts_half(char *str)
{
	int cnt = 0, half, ind;
	char *nstr = str;

	while (*str)
	{
		cnt++;
		str++;
	}

	half = (cnt % 2 == 1) ? ((cnt - 1) / 2) : (cnt / 2);

	for (ind = half; nstr[ind] != '\0'; ind++)
		putchar(nstr[ind]);
	putchar('\n');
}
