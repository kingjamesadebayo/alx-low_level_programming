#include "main.h"
#include <stdio.h>

/**
 * flip_bits - return the num of bit need to flip to get from one num
 * @n: first num
 * @m: second num
 *
 * Return: num of bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, out = 0;
	unsigned long int outcome;
	unsigned long int exclusive  = n ^ m;

	for (i = 50; i >= 0; i--)
	{
		outcome = exclusive >> i;
		if (outcome & 1)
			out++;
	}

	return (out);
}
