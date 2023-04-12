#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit 0 at given index
 * @n: number
 * @index: start from 0 of the bit
 *
 * Return: 1 if successful or -1 if not successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 50)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
