#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *add_node - adds node to beginning
 *@head: head node
 *@str: pointer
 *Return: list_t address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
size_t n = 0;

/*assign some memory*/
temp = malloc(sizeof(list_t));

if (temp == NULL)
return (NULL);

while (str[n])
n++;

temp->len = n;
/*duplicate string*/
temp->str = strdup(str);
/*next node is old head node*/
temp->next = *head;
/*new head is new node*/
*head = temp;

return (*head);
}
