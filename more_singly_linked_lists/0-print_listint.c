#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements
 * @h: list to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
    size_t counter = 0;

    while (h)
    {
        printf("%i\n", h->n);
        h = h->next;
        counter++;

    }
    return (counter);  
}