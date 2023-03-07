#include "main.h"

/**
 * print_chessboard - print a chessboard
 * Description: print a chessboard
 * @a: pointer to array of chessboard rows
 *
 * Return: a pointer to s
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(a[i] + j));
		}
		_putchar('\n');
	}
}
