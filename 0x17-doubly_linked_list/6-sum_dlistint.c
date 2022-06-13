#include <stdlib.h>
#include "lists.h"

/**
* sum_dlist_t-a function that returns the sum of all the data (n) of a dlistint_t linked list
* @head: pointer to first node
* Return: sum
*/

int sum_dlistint_t(dlistint_t *head)
{
int sum;
if (head == NULL)
{
return (0);
}
sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
