#include "main.h"

/**
* _strcat - function that appends src string to dest
* @dest: parameter 1
* @src: parameter 2
* Return: dest
*/

char *_strcat(char *dest, char *src)
{

	int destfile = 0;
	int srcfile = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destfile++;
	for (i = 0; src[i] != '\0'; i++)
		srcfile++;

	for (i = 0; i <= srcfile; i++)
		dest[destfile + i] = src[i];
return (dest);
}
