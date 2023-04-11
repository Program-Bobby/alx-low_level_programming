#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev_node = NULL, *current_node = NULL;

    if (head == NULL || *head == NULL || (*head)->next == NULL)
    {
        return (*head);
    }

    while (*head != NULL)
    {
        current_node = (*head)->next;
        (*head)->next = prev_node;
        prev_node = *head;
        *head = current_node;
    }

    return (prev_node);
}
