#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index in a linked list
 * @head: pointer to a pointer to the head of the linked list
 * @index: index of the node to be deleted, starting at 0
 * Return: 1 if deletion is successful, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int nodecount = 0;
    listint_t *node, *prevnode;

    if (head == NULL || *head == NULL) // Check if the linked list is empty
    {
        return (-1);
    }
    if (index == 0) // Check if the node to be deleted is the head node
    {
        node = *head;
        *head = (*head)->next;
        free(node); // Free the memory of the node to be deleted
        return (1);
    }
    prevnode = *head;
    node = (*head)->next;
    while (node != NULL && nodecount < (index - 1)) // Traverse through the linked list to find the node to be deleted
    {
        prevnode = node;
        node = node->next;
        nodecount++;
    }
    if (nodecount == (index - 1) && node != NULL) // Check if the node to be deleted is found
    {
        prevnode->next = node->next;
        free(node); // Free the memory of the node to be deleted
        return (1);
    }
    else
    {
        return (-1); // Return -1 if the node to be deleted is not found
    }
}
