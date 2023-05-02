#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - remove head node
 * @head: head node
 * Return: head node int value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nr;

	/*check if list is empty*/
	if (head == NULL || *head == NULL)
		return (0);

	/*save temp values*/
	temp = (*head)->next;
	nr = (*head)->n;
	/*free memory*/
	free(*head);
	/*assign new head*/
	*head = temp;
	/*return head node's value*/
	return (nr);
}

