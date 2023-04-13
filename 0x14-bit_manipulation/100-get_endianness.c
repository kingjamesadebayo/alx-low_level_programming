#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check the endianness
 * Return: 0 if big, 1 if litte
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
