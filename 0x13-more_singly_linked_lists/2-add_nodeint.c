#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add new nodes at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data to insert in the new node
 *
 * Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
