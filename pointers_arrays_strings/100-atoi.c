#include "main.h"

/**
* _atoi - Converts string to number
*
* @s: string
* Return: Converted integer or 0 if no number
*/

int _atoi(char *s)
{
	int n;
	int sign;
	int d;
	int fnum;

	n = 0;
	sign = 1;
	fnum = 0;

	while (*(s + n) != '\0')
	{
		if (s[n] == '-')
		{
			sign *= -1;
			n++;
		}
		else if (s[n] == '+')
		{
			sign *= 1;
			n++;
		}
		else if (s[n] >= '0' && s[n] <= '9')
		{
			d = s[n] - '0';
			fnum = fnum * 10 + d;
			n++;
		}
		else if (fnum != 0 && !(s[n + 1] >= '0' && s[n + 1] <= '9'))
		{
			break;
		}
		else
		{
			n++;
		}
	}
	return (sign * fnum);
}
