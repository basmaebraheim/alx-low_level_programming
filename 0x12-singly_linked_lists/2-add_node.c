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

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);
newNode->str = strdup(str);

while (newNode->str[strLength])
strLength++;
newNode->len = strLength;
newNode->next = *head;
*head = newNode;

return (*head);
}