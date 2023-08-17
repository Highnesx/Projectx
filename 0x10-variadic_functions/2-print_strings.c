#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: interger passed
 * @separator: paramter two
 * Return: int
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *len;

	va_list(arguments);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		len = va_arg(arguments, char *);
		if (!len)
			len = "nil";
		if (!separator)
			printf("%s", len);
		else if (separator && i == 0)
			printf("%s", len);
		else
			printf("%s%s", separator, len);
	}
	printf("\n");
	va_end(arguments);
}
