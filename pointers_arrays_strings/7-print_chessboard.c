#include "main.h"
#include <stdio.h>

void print_chessboard(char (*a)[8])
{
    unsigned int i, j;


    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            _putchar(a[i][j]);
        }
        printf(" \n");
    }
}
