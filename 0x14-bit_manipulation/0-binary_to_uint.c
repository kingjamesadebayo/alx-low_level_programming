#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary to an unsigned int
 * @b: pointer to string of binary
 *
 * Return: the converted num, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int outcome = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	outcome = outcome << 1;
	outcome += b[i] - '0';
	}

	return (outcome);
}
