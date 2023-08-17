#include "variadic_functions.h"

/**
 * print_numbers - function that returns the sum of all its parameters
 * @n: interger passed
 * @separator: parameter one
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list(arguments);

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(arguments, int));
		else if (separator && i == 0)
		{
			printf("%d", va_arg(arguments, int));
		}
		else
			printf("%s%d", separator, va_arg(arguments, int));

	}
	va_end(arguments);
	printf("\n");
}
