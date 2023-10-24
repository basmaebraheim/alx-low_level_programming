#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in list index.
 * @head: list head pointer
 * @idx: index to add new node
 * @n: number for new node
 * Return: sum of list int n.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node;
unsigned int i;

node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;

for (i = 0; i < idx; i++)
{
if (head == NULL)
return (NULL);
if (i == idx - 1)
{
node->next = (*head)->next;
(*head)->next = node;
return (node);
}
*head = (*head)->next;
}
free(node);
return (NULL);
}
