#include "variadic_functions.h"

/**
 * print_f - print float
 * @vprint: the float
 */

void print_f(va_list vprint)
{
	printf("%f", va_arg(vprint, double));
}

/**
 * printc - print char
 * @vprint: the char
 */

void printc(va_list vprint)
{
	printf("%c", va_arg(vprint, int));
}

/**
 * printi - print int
 * @vprint: the integer
 */

void printi(va_list vprint)
{
	printf("%d", va_arg(vprint, int));
}

/**
 * prints - print string
 * @vprint: the string
 */

void prints(va_list vprint)
{
	char *s;

	s = va_arg(vprint, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print everything
 * @format: type to print
 * Return: none
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list vprint;

	types opt[] = { {'c', printc},
			      {'i', printi},
			      {'f', print_f},
			      {'s', prints},
			      {'\0', NULL} };

	va_start(vprint, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (opt[j].c != '\0')
		{
			if (opt[j].c == format[i])
			{
				printf("%s", separator);
				opt[j].f(vprint);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(vprint);
	printf("\n");
}
