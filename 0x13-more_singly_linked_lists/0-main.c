#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - entry point for program
 *
 * Return: Always 0.
*/
int main(void)
{
	listint_t *head; // declare a pointer to a node in a singly linked list
	listint_t *new; // declare a pointer to a new node
	listint_t hello = {8, NULL}; // declare a node called "hello" with a value of 8 and a NULL pointer
	size_t n; // declare a size_t variable to hold the number of elements in the linked list

	head = &hello; // set the head pointer to point to the "hello" node
	new = malloc(sizeof(listint_t)); // allocate memory for a new node

	if (new == NULL) // check if malloc failed to allocate memory
	{
	printf("Error\n"); // print an error message if malloc failed
	return (1); // return an error code
	}

	new->n = 9; // set the value of the new node to 9
	new->next = head; // set the "next" pointer of the new node to point to the "hello" node
	head = new; // set the head pointer to point to the new node

	n = print_listint(head); // print the linked list and store the number of elements in the list

	printf("-> %lu elements\n", n); // print the number of elements in the linked list
	free(new); // free the memory allocated for the new node
	return (0); // return 0 to indicate successful completion of the program
}

