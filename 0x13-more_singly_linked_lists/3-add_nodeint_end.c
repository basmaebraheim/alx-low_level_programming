#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of list
 * @head: pointer to a linked list
 * @n: number to add to the new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *lastNode;
int i = 0;

node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = NULL;
if (!*head)
{
*head = node;
return (node);
}
lastNode = *head;
while (lastNode->next)
lastNode = lastNode->next;
lastNode->next = node;
return (node);
}

