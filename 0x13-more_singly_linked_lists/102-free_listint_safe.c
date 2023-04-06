#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the listint_t list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *frees, *temp;
	size_t len = 0;

	if (h == NULL)
		return 0;

	frees = *h;
	*h = NULL;

	while (frees != NULL)
	{
		if (frees <= frees->next)
		{
			temp = frees;
			frees = frees->next;
			free(temp);
			len++;
		}
		else
		{
			free(frees);
			len++;
			break;
		}
	}
	return len;

}
