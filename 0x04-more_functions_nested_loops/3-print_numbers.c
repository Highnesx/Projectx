#include "main.h"

/**
 * _numbers - function that prints numbers
 * @0
 * @9
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
