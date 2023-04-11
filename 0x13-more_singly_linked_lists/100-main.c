#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - main function to test the linked list operations
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head; // declare a pointer to a list of integers called head
    head = NULL; // set head to NULL to signify an empty list

    // add elements to the list using the add_nodeint_end function
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);

    // print the list using the print_listint function
    print_listint(head);

    // reverse the list using the reverse_listint function
    reverse_listint(&head);

    // print the reversed list
    print_listint(head);

    // free the memory allocated to the list using the free_listint2 function
    free_listint2(&head);

    return (0); // return 0 to signify successful execution of the program
}
