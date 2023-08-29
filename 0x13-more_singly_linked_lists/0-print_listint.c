#include "lists.h"

/**
 * print_listint - A fxn that prints all the elements of a linked list
 * @h: linked list
 * Return: number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{

		size_t index = 0;

		while (h)
		{
			printf("%d\n", h->n);
			index++;
			h = h->next;
		}
		return (index);
}
