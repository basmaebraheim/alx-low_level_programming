#include "lists.h"

/**
 * sum_listint - get list sum.
 * @head: list head pointer
 * Return: sum of list int n.
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
