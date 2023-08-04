#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: parameter to be converted
 *
 * Return: int
 */
int _atoi(char *s)
{
	int v, d, n, len, f, digit;

	v = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (v < len && f == 0)
	{
		if (s[v] == '-')
			++d;

		if (s[v] >= '0' && s[v] <= '9')
		{
			digit = s[v] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[v + 1] < '0' || s[v + 1] > '9')
				break;
			f = 0;
		}
		v++;
	}

	if (f == 0)
		return (0);
	return (n);
}
