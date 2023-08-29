#include "lists.h"
/**
 * insert_nodeint_at_index - Fxn that inserts a new node in a list.
 * @head: first node in the list pointer
 * @idx: index of new node
 * @n: value to insert in the new node
 * Return: A pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

		unsigned int count;
		listint_t *newNode;
		listint_t *tempNode = *head;

		newNode = malloc(sizeof(listint_t));
		if (!newNode || !head)
			return (NULL);
		newNode->n = n;
		newNode->next = NULL;
		if (idx == 0)
		{
			newNode->next = *head;
			*head = newNode;
			return (newNode);
		}
		for (count = 0; tempNode && count < idx; count++)
		{
			if (count == idx - 1)
			{
				newNode->next = tempNode->next;
				tempNode->next = newNode;
				return (newNode);
			}
			else
				tempNode = tempNode->next;
		}
		return (NULL);
}
