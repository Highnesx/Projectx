#include "lists.h"


/**
 * sum_listint - Fxn that calculates the sum of all the data in a list
 * @head: first node in the linked list
 * Return: Sum(index)
 */

int sum_listint(listint_t *head)
{

		int index = 0;

		listint_t *temp = head;


		while (temp)

		{

			index += temp->n;

			temp = temp->next;

		}


		return (index);

}
