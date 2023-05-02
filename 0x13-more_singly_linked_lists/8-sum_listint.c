#include "lists.h"

/**
 * sum_listint - summ all the values of the list
 * @head: head node
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;
	listint_t *current;

	if (head == NULL)
		return (0);

	/*assign starting point*/
	current = head;

	for (i = 0; current != NULL; i++)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}

