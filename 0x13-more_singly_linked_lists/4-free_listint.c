#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the memory of a list
 * @head: head node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		/*save next node*/
		temp = head->next;
		/*free memory*/
		free(head);
		/*move to next node*/
		head = temp;
	}
}

