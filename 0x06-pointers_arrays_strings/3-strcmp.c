#include "main.h"


_strcmp(char *s1, char *s2)
{
int char_count;
char_count = 0;

while (s1[char_count] != '\0' && s2[char_count] != '\0')
{
if (s1[char_count] != s2[char_count])
{
return (s1[char_count] - s2[char_count]);
}
char_count++;
}
return (0);
}
