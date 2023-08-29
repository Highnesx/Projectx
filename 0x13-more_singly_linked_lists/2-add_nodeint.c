#include "lists.h"


/**
 * add_nodeint - function that adds a new node at the beginning of list
 * @head: pointer to the first node.
 * @n: The value to insert in that new node
 *
 * Return: A pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

		listint_t *newptr;


		newptr = malloc(sizeof(listint_t));

		if (!newptr)

			return (NULL);


		newptr->n = n;

		newptr->next = *head;

		*head = newptr;


		return (newptr);

}
