#include "main.h"
#include <stdio.h>

/**
 * get_bit - return the value of a bit at a given index
 * @n: num to search
 * @index: start from 0 of the bit
 *
 * Return: the value of the bit index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int out;

	if (index > 50)
		return (-1);

	out = (n >> index) & 1;

	return (out);
}
