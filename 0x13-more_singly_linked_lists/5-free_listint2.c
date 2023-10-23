#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *nextNode;

while (*head)
{
nextNode = (*head)->next;
free(*head);
*head = nextNode;
}

}
