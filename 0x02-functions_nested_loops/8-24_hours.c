#include "main.h"
/**
 * jack_bauer - Print hour countdown
 *
 */

void jack_bauer(void)
{
int hour, min;

for (hour = 0; hour < 24; hour++)
for (min = 0; min < 61; min++)
{
{
if (hour < 10)
{
_putchar('0');
_putchar(hour);
}
else
{
_putchar(hour);
}
_putchar(':');
if (min < 10)
{
_putchar('0');
_putchar(min);
}
else
{
_putchar(min);
}
}
}
