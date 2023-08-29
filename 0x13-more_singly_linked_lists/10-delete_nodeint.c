#include "lists.h"


/**
 * delete_nodeint_at_index -Fxn that deletes a node at a certain indexes
 * @head: first element pointer in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

		listint_t *tempNode = *head;

		listint_t *currentNode = NULL;

		unsigned int count = 0;

		if (*head == NULL)
			return (-1);
		if (index == 0)
		{
			*head = (*head)->next;
			free(tempNode);
			return (1);
		}
		while (count < index - 1)
		{
		if (!tempNode || !(tempNode->next))
			return (-1);
			tempNode = tempNode->next;
			count++;
		}
		currentNode = tempNode->next;
		tempNode->next = currentNode->next;
		free(currentNode);
		return (1);
}
