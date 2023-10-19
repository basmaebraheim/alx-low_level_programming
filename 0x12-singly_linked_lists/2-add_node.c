#include "lists.h"
/**
 * _strlen - get string length
 * @str: string
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
unsigned int i;

for (i = 0; str[i]; i++)
;
return (i);
}
/**
 * add_node- add new node to front list.
 * @head: list head
 * @str: new node str
 * Return: list head.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;

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
newNode->len = _strlen(newNode->str);

if (*head)
newNode->next = *head;

return (newNode);
}
