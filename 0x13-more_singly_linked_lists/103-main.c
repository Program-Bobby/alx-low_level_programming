#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *head1, *head2, *node;

    head1 = NULL;
    add_nodeint(&head1, 0);
    add_nodeint(&head1, 1);
    add_nodeint(&head1, 2);
    add_nodeint(&head1, 3);
    add_nodeint(&head1, 4);
    print_listint_safe(head1);
    node = find_listint_loop(head1);
    if (node)
    {
        printf("Loop starts at [%p] %d\n", (void *)node, node->n);
    }
    free_listint_safe(&head1);

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    node = find_listint_loop(head2);
    if (node)
    {
        printf("Loop starts at [%p] %d\n", (void *)node, node->n);
    }
    free_listint_safe(&head2);

    head1 = NULL;
    add_nodeint(&head1, 0);
    add_nodeint(&head1, 1);
    add_nodeint(&head1, 2);
    add_nodeint(&head1, 3);
    add_nodeint(&head1, 4);
    add_nodeint(&head1, 5);
    add_nodeint(&head1, 6);
    node = add_nodeint(&head1, 7);
    add_nodeint(&head1, 98);
    add_nodeint(&head1, 402);
    add_nodeint(&head1, 1024);
    node->next = head1->next->next;
    print_listint_safe(head1);
    node = find_listint_loop(head1);
    if (node)
    {
        printf("Loop starts at [%p] %d\n", (void *)node, node->n);
    }
    free_listint_safe(&head1);

    return (0);
}
