#include "main.h"

/**
* _strncpy - function that copies strings
* @dest: parameter 1
* @src: parameter 2
* @n: parameter 3
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
