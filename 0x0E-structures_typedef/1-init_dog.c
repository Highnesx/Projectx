#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that intialize a variable of type struct dog
 * @d: member 1
 * @name: member 2
 * @age: member 3
 * @owner: member 3
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
