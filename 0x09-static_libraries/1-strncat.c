#include "main.h"

/**
* _strncat - function that concatenates two strings
* @dest: paramter 1
* @src: parameter 2
* @n: parameter 3
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{

	int destfile = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destfile + i] = *src;
		src++;
	}
	dest[destfile + i] = '\0';
	return (dest);
}
