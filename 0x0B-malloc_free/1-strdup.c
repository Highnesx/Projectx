#include "main.h"

/**
* _strdup - function that returns a pointer to a newly allocated space in mem
* @str: str inputted
* Return: char
*/

char *_strdup(char *str)
{

	int i = 0;
	char *dup;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		dup[j] = str[j];
	}

	return (dup);
}
