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
listint_t *temp, *node;
unsigned int i;

temp = *head;
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;

for (i = 0; i < idx; i++)
{
if (temp == NULL)
return (NULL);
if (i == idx - 1)
{
node->next = temp->next;
temp->next = node;
return (node);
}
temp = temp->next;
}
free(node);
return (NULL);
}
