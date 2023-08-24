#include "lists.h"

/**
 * add_node -  add new node to start of list.
 * @head: list head pointer
 * @str: new node string
 * Return: new list address.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
int strLength = 0;

if (head == NULL)
return (NULL);
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);
if (str)
{
newNode->str = strdup(str);
if (!newNode->str)
{
free(newNode);
return (NULL);
}

while (newNode->str[strLength])
strLength++;
newNode->len = strLength;
}

newNode->next = *head;
*head = newNode;

return (*newNode);
}
