#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints list safe.
 * @head: list head pointer
 *
 * Return: the number list nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i, num = 0;
const listint_t **list = NULL;

while (head != NULL)
{
for (i = 0; i < num; i++)
{
if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (num);
}
}
num++;
list = reallocatelist(list, num, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (num);
}

/**
 * reallocatelist -  reallocate memory
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **reallocatelist(const listint_t **list, size_t size, const listint_t *new)
{
const listint_t **newlist;
size_t i;

newlist = malloc(size * sizeof(listint_t *));
if (newlist == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
newlist[i] = list[i];
newlist[i] = new;
free(list);
return (newlist);
}
