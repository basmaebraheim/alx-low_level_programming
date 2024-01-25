#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
        print_dlistint(head);

    add_dnodeint(&head, 1);
        print_dlistint(head);

    add_dnodeint(&head, 2);
        print_dlistint(head);

    add_dnodeint(&head, 3);
        print_dlistint(head);

    add_dnodeint(&head, 4);
        print_dlistint(head);

    add_dnodeint(&head, 98);
        print_dlistint(head);

    add_dnodeint(&head, 402);
        print_dlistint(head);

    add_dnodeint(&head, 1024);
        print_dlistint(head);

    print_dlistint(head);
    return (EXIT_SUCCESS);
}