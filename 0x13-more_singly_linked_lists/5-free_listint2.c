#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a list and sets the head to null
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	/*if head already null, do nothing*/
	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}

