#include "lists.h"
/**
 * add_node- add new node to front list.
 * @head: list head
 * @str: new node str
 * Return: list head.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int i;

if (!str)
return (NULL);
newNode = malloc(sizeof(newNode));
if (!newNode)
return (NULL);
newNode->str = strdup(str);
if (!newNode->str)
{
free(newNode);
return (NULL);
}
while (newNode->str[i])
i++;
newNode->len = i;

if (*head)
newNode->next = *head;

return (newNode);
}
