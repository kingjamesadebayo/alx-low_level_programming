#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a  linked list
 * @h: linked list listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return num;
}
