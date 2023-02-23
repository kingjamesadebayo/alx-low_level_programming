#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *    separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
<<<<<<< HEAD
	for (count = 0; count < 50; count++){
=======
	for (count = 0; count < 50; count++)
	{
>>>>>>> f9c881cbd6ba6c081648d3cefd30176016ded90d
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
