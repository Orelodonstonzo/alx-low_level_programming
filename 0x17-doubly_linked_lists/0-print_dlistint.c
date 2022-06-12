#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_dlistint-a function that prints all the element of a dlistint_t list
* @h: pointer to list beginning
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
