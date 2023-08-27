#include "lists.h"

/**
 * add_node - function that adds new node
 * @head: ponter to the list_t
 * @str: pointer to string
 * Return: NULL on failure
*/
list_t *add_node(list_t **head, const char *str)
{

	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL) {
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL) {
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}

