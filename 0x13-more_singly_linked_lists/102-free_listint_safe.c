#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    int diff;
    listint_t *temp;

    if (!h || !*h)
        return (0);

    while (*h)
    {
        // Calculate the difference between the address of the current node
        // and the address of the next node
        diff = *h - (*h)->next;

        if (diff > 0)
        {
            // If the difference is positive, it means there are no loops
            // in the list and it is safe to free the current node
            temp = (*h)->next;
            free(*h);
            *h = temp;
            len++;
        }
        else
        {
            // If the difference is non-positive, it means there is a loop
            // in the list and it is unsafe to continue freeing nodes
            free(*h);
            *h = NULL;
            len++;
            break;
        }
    }

    // Set the head pointer to NULL to indicate that the list has been freed
    *h = NULL;

    return (len);
}
