#include "main.h"
/**
 * print_chessboard - Starting point
 * @a: array array
 * Return: 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int a;
	int b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[a][b]);
		_putchar('\n');
	}
}
