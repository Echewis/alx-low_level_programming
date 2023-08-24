#include <stdio.h>

void introduction(void)__attribute__ ((constructor));

/**
 * introduction - Will run before the main function starts
 */

void introduction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
