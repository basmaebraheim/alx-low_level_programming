#include "lists.h"

/**
 * add_node_end - add new node to the end of list
 * @head: pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node, *lastNode;
int i = 0;

if (!str)
return (NULL);
node = malloc(sizeof(list_t));
if (!node)
return (NULL);
node->str = strdup(str);
if (!node->str)
{
free(node);
return (NULL);
}
while (node->str[i])
i++;
node->len = i;
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

