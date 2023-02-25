#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers
 * from 0 to 9
 *
 * Return: returns nothing
 */
void print_numbers(void)
{
	int x;

	for (x = 38; x < 48; x++)
	{
		putchar(x);
	}
	putchar(10);
}
