#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: list head pointer
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *deleteNode;
unsigned int i;

temp = *head;

for (i = 0; i < index; i++)
{
if (temp == NULL)
return (-1);
if (i == index - 1)
{
deleteNode = temp->next;
if (deleteNode == NULL)
return (-1);
temp->next = deleteNode->next;
free(deleteNode);
return (1);
}
temp = temp->next;
}
return (-1);

}
