#include "lists.h"


/**
 * add_nodeint_end - Fxn that adds a node at the end of a linked list
 * @head: first node
 * @n: value to insert in the new element
 * Return: pointer to the new node, NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{

		listint_t *newNode;

		listint_t *tempNode = *head;


		newNode = malloc(sizeof(listint_t));

		if (!newNode)

			return (NULL);


		newNode->n = n;

		newNode->next = NULL;


		if (*head == NULL)

		{

			*head = newNode;

			return (newNode);

		}


		while (tempNode->next)

			tempNode = tempNode->next;


		tempNode->next = newNode;


		return (newNode);

}
