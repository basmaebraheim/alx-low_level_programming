#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head of list
 * @n: new node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode = NULL;

newNode = malloc(sizeof(dlistint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = *head;
newNode->prev = NULL;
if (*head != NULL)
(*head)->prev = newNode;
*head = newNode;
return (newNode);
}
