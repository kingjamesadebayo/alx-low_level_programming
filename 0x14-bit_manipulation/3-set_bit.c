#include "main.h"
#include <stdio.h>

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: number
 * @index: start from 0 of the bit you want to set
 *
 * Return: 1 if successful or -1 if not successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 50)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
