#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node at beginning
 * @head: head node
 * @str: string to add for new node
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int l = 0;

	l = strlen(str);

	/*memory*/
	new = malloc(sizeof(list_t) * 1);
	/*check if worked*/
	if (new == NULL)
		return (NULL);

	new->next = (*head);
	new->str = strdup(str);
	new->len = l;
	(*head) = new; /*change head to new node*/

	return (*head);
}

