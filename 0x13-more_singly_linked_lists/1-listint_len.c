#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the number of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: num of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
