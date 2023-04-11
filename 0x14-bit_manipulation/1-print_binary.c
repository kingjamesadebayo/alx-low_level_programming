#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the binary representattion of a num
 * @n: num to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar((n & 1) ? '1' : '0');
}
