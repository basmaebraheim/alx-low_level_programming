#include "lists.h"

/**
 * get_nodeint_at_index -  pop node from list.
 * @head: list head pointer
 * @index: index of node to return
 * Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
