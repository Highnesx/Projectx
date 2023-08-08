#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: parameter 1
 * @av: parameter 2
 * Return: 0
*/

char *argstostr(int ac, char **av)
{

	int x, y, z = 0, l = 0;
	char *output;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
				x++;
	}
	l += ac;

	output = malloc(sizeof(char) * l + 1);
	if (output == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			output[z] = av[x][y];
			z++;
		}
		if (output[z] == '\0')
		{
			output[z++] = '\n';
		}
	}
	return (output);
}
