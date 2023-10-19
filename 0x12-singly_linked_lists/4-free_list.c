#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to a linked list
 *
 * Return: pointer to new node
 */
void free_list(list_t *head)
{
list_t *nextNode;

while (head)
{
nextNode = head->next;
free(head);
head = nextNode;
}

}