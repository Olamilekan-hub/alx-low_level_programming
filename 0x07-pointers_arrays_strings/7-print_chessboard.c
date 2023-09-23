#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - use a 2-dimensional array to print chessboard
 *	to the stdout
 * @a: pointer to the array of column
 *
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c", a[r][c]);
		}
		printf("\n");
	}
}
