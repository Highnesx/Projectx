#include <stdio.h>

/**
* main - function that prints the number of arguments passed into it
* @argc: parameter one
* @argv: parameter 2
* Return: int
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);

}
