#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a linked list
 * @head: list_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
