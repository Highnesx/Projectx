#include "lists.h"


/**
 * pop_listint - Fxn that deletes the head of a linked list
 * @head: A pointer to the first element of the list
 * Return: The value inside the deleted element
 */

int pop_listint(listint_t **head)

{

		listint_t *tempNode;

		int index;


		if (!head || !*head)

			return (0);


		index = (*head)->n;

		tempNode = (*head)->next;

		free(*head);

		*head = tempNode;


		return (index);

}
