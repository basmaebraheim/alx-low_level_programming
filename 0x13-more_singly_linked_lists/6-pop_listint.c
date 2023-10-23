#include "lists.h"

/**
 * pop_listint -  pop node from list.
 * @head: list head pointer
 * Return: new list address.
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *nextNode;

if (!*head)
{
return (0);
}
n = (*head)->n;
nextNode = (*head)->next;
free(*head);
*head = nextNode;

return (n);
}
