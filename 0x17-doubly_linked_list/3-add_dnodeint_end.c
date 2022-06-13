#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint_end-a function that adds all new node at the end of a dlistint_t list
* @head: a pointer to the pointer of the first node
* @n: integer
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *end_node, *temp;
if (head == NULL)
return (NULL);
end_node = malloc(sizeof(dlistint_t));
if (end_node == NULL)
return (NULL);
end_node->n = n;
end_node->next = NULL;
if (*head == NULL)
{
end_node->prev = NULL;
*head = end_node;
return (end_node);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = end_node;
end_node->prev = temp;
return (end_node);
}
