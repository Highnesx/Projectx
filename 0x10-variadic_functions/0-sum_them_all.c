#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: interger passed
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum = 0;

	va_list argument;

	va_start(argument, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argument, int);
	va_end(argument);
	return (sum);

}
