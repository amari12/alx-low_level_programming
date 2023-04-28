#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next; /*next node*/
		/*free memory*/
		free(head->str);
		free(head);
		head = temp; /*new head*/
	}
}

