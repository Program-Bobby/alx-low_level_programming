#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head = NULL;
    listint_t *head2 = NULL;
    listint_t *node = NULL;
    size_t len;

    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);

    printf("List 1:\n");
    len = print_listint_safe(head2);
    printf("-> %lu elements\n", len);

    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);

    printf("List 2:\n");
    len = print_listint_safe(head);
    printf("-> %lu elements\n", len);

    len = free_listint_safe(&head2);
    printf("-> %lu elements freed from List 1\n", len);

    len = free_listint_safe(&head);
    printf("-> %lu elements freed from List 2\n", len);

    printf("head2: %p, head: %p\n", (void *)head2, (void *)head);

    return (0);
}