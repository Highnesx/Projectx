#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned int
 *
 *
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{

	char *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
