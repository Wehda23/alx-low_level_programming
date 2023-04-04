#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - is a function used to print chess board
 * @a: String of strings
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
    int index = 0, snd = 0;

    for (index = 0; a[index][7]; index++)
	{
		for (snd = 0; snd < 8; snd++)
			putchar(a[index][snd]);

		putchar('\n');
	}
}