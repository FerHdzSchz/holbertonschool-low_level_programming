#include "main.h"
/**
 *
 *
 */

void print_rev(char *s)
{
    int j, i;
    int len_str = 0;
    while (*(s + len_str) != '\0')
    {
    len_str += 1;
    }

    char rev_str[len_str];
    for (j = len_str; j = 0; j--)
    {
        i = len_str - j;
        rev_str[j] = *(s + i);
    }


}