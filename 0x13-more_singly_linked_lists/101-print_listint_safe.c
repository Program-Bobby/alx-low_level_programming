#include "lists.h"

/**
 * print_listint_safe - Function that prints a linked list safely, detecting loops.
 * @head: Pointer to the 1st node of the linked list
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current_node = NULL, *loop_node = NULL;
    size_t node_count = 0, loop_index;

    current_node = head;
    while (current_node != NULL)
    {
        // Print the node's address and value, and increment the node counter.
        printf("[%p] %d\n", (void *)current_node, current_node->n);
        node_count++;

        // Check if there is a loop by comparing the address of each node to those of the previous nodes.
        // If a loop is detected, print the node's address and value with an arrow pointing to it, and return the node count.
        loop_node = head;
        loop_index = 0;
        while (loop_index < node_count)
        {
            if (current_node == loop_node)
            {
                printf("-> [%p] %d\n", (void *)current_node, current_node->n);
                return (node_count);
            }
            loop_node = loop_node->next;
            loop_index++;
        }

        // Move to the next node.
        current_node = current_node->next;

        // Exit with an error message if the linked list is NULL.
        if (head == NULL)
            exit(98);
    }

    // Return the number of nodes in the list.
    return (node_count);
}

