#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - function to test the listint_len() function
 *
 * Return: Always 0.
 */

int main(void)
{
    listint_t *head; // declare a pointer to a linked list
    listint_t *new; // declare a pointer to a new node in the linked list
    listint_t hello = {8, NULL}; // declare and initialize a node in the linked list
    size_t n; // declare a variable to hold the number of nodes in the linked list

    head = &hello; // initialize the head pointer to point to the first node in the linked list
    new = malloc(sizeof(listint_t)); // allocate memory for a new node
    if (new == NULL) // check if the allocation was successful
    {
        printf("Error\n"); // if the allocation failed, print an error message
        return (1); // and return an error code
    }
    new->n = 9; // set the value of the new node to 9
    new->next = head; // set the next pointer of the new node to point to the first node in the linked list
    head = new; // set the head pointer to point to the new node
    n = listint_len(head); // get the number of nodes in the linked list
    printf("-> %lu elements\n", n); // print the number of nodes in the linked list
    free(new); // free the memory allocated for the new node
    return (0); // return 0 to indicate success
}
