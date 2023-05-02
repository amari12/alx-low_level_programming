#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning
 * @head: head node
 * @n: int value for new node
 * Return: address of new node (head) / null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	/*check for failure*/
	if (new == NULL)
		return (NULL);
	/*add node and change head*/
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

