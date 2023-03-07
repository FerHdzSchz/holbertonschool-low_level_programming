#include "main.h"

/**
 * rot13 - Return string as rot13
 *
 * @str: String to convert
 * Return: Converted string
 */

char *rot13(char *str)
{

int curr_char;
int aux_char;
char aux1_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char aux2_chars[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

curr_char = 0;
aux_char = 0;

while (str[curr_char] != '\0')
{
for (aux_char = 0; str[aux_char] != '\0'; aux_char++)
{
if (str[curr_char] == aux1_chars[aux_char])
{
str[curr_char] = aux2_chars[aux_char];
break;
}
}
curr_char++;
}
return (str);
}
