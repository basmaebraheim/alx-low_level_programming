#include "lists.h"
/**
 * get_dnodeint_at_index - get the sum of all
 * the data (n) of a dlistint_t linked list.
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
