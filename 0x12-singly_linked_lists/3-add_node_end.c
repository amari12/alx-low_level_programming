#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *add_node_end - adds node to the end of list
 *@head: head node
 *@str: str of node to add
 *Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *current;
size_t n = 0;

/*assign memory*/
new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

new->str = strdup(str);

while (str[n]) /*get length*/
n++;

/*attribute/initialise new node*/
new->len = n;
new->next = NULL;
/*set current as head node*/
current = *head;

if (current == NULL) /*essentially if list empty?*/
*head = new;
else
{ /*get to last node*/
while (current->next != NULL)
current = current->next;
/*when at last node, add new node after*/
current->next = new;
}
return (*head);
}
