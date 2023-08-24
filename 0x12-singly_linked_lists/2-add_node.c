#include "lists.h"

/**
 * add_node -  add new node to start of list.
 * @h: input list
 * Return: new list address.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *newNode;
    int strLength = 0;

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

    while (newNode->str[strLength])
        strLength++;
    newNode->len = strLength;

    if (!head)
        return (newNode);

    newNode->next = newNode;

	return (newNode);
}
