#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print a linked list
 * @h: pointer to the head node of the linked list
 * Return: the number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
    size_t nodecount = 0; // initialize the number of nodes to 0

    while (h != NULL) // iterate through the linked list as long as the current node is not NULL
    {
        printf("%d\n", h->n); // print the value of the current node
        h = h->next; // move the pointer to the next node in the list
        nodecount++; // increment the node count
    }
    return (nodecount); // return the total number of nodes in the linked list
}

