#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint - add new node in beginning
*@head: head node
*@n: int of new node
*Return: address of new node / null
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
/*check if failed*/
if (new == NULL)
return (NULL);
/*add new node and change head node*/
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
