#include "lists.h"

/**
 * add_nodeint -  add new node to start of list.
 * @head: list head pointer
 * @n: new node number
 * Return: new list address.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;
int i = 0;

node = malloc(sizeof(listint_t));
node->n = n;
if (!*head)
{
*head = node;
return (node);
}

node->next = *head;
*head = node;

return (node);
}
