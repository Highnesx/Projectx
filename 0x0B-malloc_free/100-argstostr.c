#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: parameter 1
 * @av: parameter 2
 * Return: 0
*/

char *argstostr(int ac, char **av)
{

	int x, y; 
	int z = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
		x++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}
	return (str);
}
