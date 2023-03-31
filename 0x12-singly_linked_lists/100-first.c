#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - print a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}
