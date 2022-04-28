#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* pop_listint - a function that deletes that the head node of a
* listint_t linked list, and returns the head node data (n)
* @head: head
* Return: 0
*/
int pop_listint(listint_t **head)
{ 
int node_data;
listint_t *new;
if (*head == NULL)
return (0);
node_data = (*head)->n;
new = *head;
*head = (*head)->next;
free(new);
return (node_data);
}
