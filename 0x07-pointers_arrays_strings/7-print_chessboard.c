#include "main.h"
#include <string.h>

/**
 * print_chessboard - Entry point
 * @a: pointer
*/
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			putchar(a[x][y]);
			y++;
		}
		putchar('\n');
		x++;
	}
}
