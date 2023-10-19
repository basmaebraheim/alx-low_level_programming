#include "lists.h"

/**
 * add_node -  add new node to start of list.
 * @head: list head pointer
 * @str: new node string
 * Return: new list address.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
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
if (!*head)
{
*head = node;
return (node);
}

node->next = *head;
*head = node;

return (node);
}
