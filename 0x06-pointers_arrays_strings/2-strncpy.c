#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{

int word_letter;

word_letter = 0;
while (src[word_letter] != '\0' && word_letter < n)
{
dest[word_letter] = src[word_letter];
word_letter++;
}
while (word_letter < n)
{
dest[word_letter] = '\0';
word_letter++;
}

return (dest);
}
