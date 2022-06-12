#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* get_dnodeint_at_index-a function that returns the nth node of a dlistint_t linked list
* @head: pointer to the first node
* @index: node index
* Return: node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i:
if (head == NULL)
return (NULL);
if (head == 0)
return (head);
for (i = 0; < index; i++)
{
if (head->next == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
