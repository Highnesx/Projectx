#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that prints a name
 * @array: parameter one
 * @size: size of array
 * @cmp: poiter func
 * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
