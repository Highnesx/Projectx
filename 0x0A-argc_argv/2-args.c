#include <stdio.h>

/**
* main - function that prints all argments it receives
* @argc: parameter one
* @argv: parameter two
* Return: int, char
*/

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
