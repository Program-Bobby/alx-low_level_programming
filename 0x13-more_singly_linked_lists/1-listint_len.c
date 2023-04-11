#include "lists.h"
#include <stddef.h>

/**
 * listint_len - function to count the number of nodes in a linked list
 * @h: a pointer to the head node of the linked list
 * Return: the number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
    size_t length = 0; // initialize the length of the linked list to 0

    while (h != NULL) // iterate through the linked list as long as the current node is not NULL
    {
        length++; // increment the length counter
        h = h->next; // move the pointer to the next node in the list
    }
    return (length); // return the total number of nodes in the linked list
}
