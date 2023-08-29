#include "lists.h"


/**
 * get_nodeint_at_index - Fxn that returns node at a certain index in list
 * @head: first node.
 * @index: index of the node.
 * Return: A pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

		unsigned int count = 0;

		listint_t *tempNode = head;


		while (tempNode && count < index)

		{

			tempNode = tempNode->next;

			count++;

		}


		return (tempNode ? tempNode : NULL);

}
