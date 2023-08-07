#include "main.h"

/**
* create_array - function that creates an array of char.
* @size: size to be inputted
* @c: character to be inputted
* Return: char
*/

char *create_array(unsigned int size, char c)
{

	char *grade;
	unsigned int i;

	grade = malloc(sizeof(char) * size);
	if (size == 0 || grade == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		grade[i] = c;
	}
	return (grade);
}
