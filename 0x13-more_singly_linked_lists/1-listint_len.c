#include "lists.h"


/**
 * listint_len - function that returns the number of elements in a linked lists
 * @h: linked list of type
 *
 * Return: no. of nodes
 */

size_t listint_len(const listint_t *h)
{

		size_t index = 0;

		while (h)
		{
		index++;
		h = h->next;
		}
		return (index);
}
