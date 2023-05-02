#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end of the list
 * @head: head node
 * @n: int value for new node
 * Return: listint_t (pointer to new node)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	/*assign memory*/
	new = malloc(sizeof(listint_t));
	/*Check for failure*/
	if (new == NULL)
		return (NULL);
	/*assign new node*/
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{ /*empty list*/
		*head = new;
		return (new);
	}

	/*get to last node*/
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}

