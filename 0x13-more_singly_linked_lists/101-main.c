#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - entry point of the program
 *
 * Return: Always 0.
 */
int main(void)
{
    /* Create a new list called 'head2' and add some elements to it */
    listint_t *head2;
    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    
    /* Print the elements of 'head2' in a safe way, avoiding infinite loops */
    print_listint_safe(head2);
    
    /* Create a new list called 'head', add some elements to it, and create a loop */
    listint_t *head;
    listint_t *node;
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    
    /* Print the elements of 'head' in a safe way, avoiding infinite loops */
    print_listint_safe(head);
    
    return (0);
}
