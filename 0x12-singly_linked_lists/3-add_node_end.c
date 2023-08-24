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
list_t *newNode, *lastNode;

if (!str)
return (NULL);
newNode = malloc(sizeof(list_t));
if (!newNode)
return (NULL);
newNode->str = strdup(str);
if (!newNode->str)
{
free(newNode);
return (NULL);
}
newNode->len = _strlen(newNode->str);
newNode->next = NULL;
if (!*head)
{
*head = newNode;
return (newNode);
}
lastNode = *head;
while (lastNode->next)
lastNode = lastNode->next;
lastNode->next = newNode;
return (newNode);
}

