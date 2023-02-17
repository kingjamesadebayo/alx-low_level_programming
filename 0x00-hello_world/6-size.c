# include <stdio.h>

/**
 * main - A program that prints the size of various computer types
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long long int d;
	float f;
	printf("size of a char: %d byte(s)\n",(unsigned long)sizeof(a));
	printf("size of an int: %d byte(s)\n",(unsigned long)sizeof(b));
	printf("size of a long int: %d byte(s)\n",(unsigned long)sizeof(c));
	printf("size of a long long int: %d byte(s)\n",(unsigned long)sizeof(d));
	printf("size of a float: %d byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
