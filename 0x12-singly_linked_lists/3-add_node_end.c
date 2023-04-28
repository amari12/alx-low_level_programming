#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node at the end
 * @head: head node
 * @str: string to add to new node
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int len;
	list_t *temp;

	len = strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->str = strdup(str);
	new->len = len;
	
	if (*head == NULL)
	{ /*empty list*/
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	} /*get to last node*/
	temp->next = new; /*put new node after last node*/

	return (new);
}

