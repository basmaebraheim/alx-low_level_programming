#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: list head pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous, *next;

previous = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}
*head = previous;
return (*head);
}

