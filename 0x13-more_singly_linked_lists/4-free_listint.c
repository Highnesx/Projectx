#include "lists.h"


/**
 * free_listint - Fxn that frees a linked list
 * @head: list to be freed
 */

void free_listint(listint_t *head)
{

		listint_t *tempNode;


		while (head)

		{

			tempNode = head->next;

			free(head);

			head = tempNode;

		}

}
