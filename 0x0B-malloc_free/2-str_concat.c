#include "main.h"

/**
* str_concat - function that concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: char
*/

char *str_concat(char *s1, char *s2)
{

	char *add;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	add = malloc(sizeof(char) * (i + j + 1));

	if (add == NULL)
	{
		return (NULL);
	}
		i = j = 0;
	while (s1[i] != '\0')
	{
		add[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		add[i] = s2[j];
		i++;
		j++;
	}
	add[i] = '\0';
	return (add);
}
