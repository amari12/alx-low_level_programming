#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at index
 * @head: head node
 * @idx: index/position
 * @n: value for new node
 * Return: listint_t node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *current = *head, *prev = NULL;
	listint_t *new;
	unsigned int i;

	/*assign memory*/
	new = malloc(sizeof(listint_t));
	/*check if malloc worked/failed*/
	if (new == NULL)
		return (NULL);
	/*assign value*/
	new->n = n;
	/*check if list is empty or if idx is 0*/
	if ((*head == NULL || head == NULL) && idx == 0)
	{
		*head = new;
		return (new);
	}
	/*if list is empty and idx is not 0*/
	if (*head == NULL && idx != 0)
		return (NULL);
	/*loop through list to find index*/
	for (i = 0; current != NULL; i++)
	{
		if (i == idx)
		{
			prev->next = new;
			new->next = current;
			new->n = n;
			return (new);
		}
		else
		{
			temp = current;
			current = current->next;
			prev = temp;
		}
	}
	/*could not find index*/
	free(new);
	return (NULL);
}

