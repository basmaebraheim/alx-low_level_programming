#include "lists.h"
/**
 * sum_dlistint - get the sum data in list.
 * @head: pointer to head of list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current)
{
sum += current->n;
current = current->next;
}
return (sum);
}
