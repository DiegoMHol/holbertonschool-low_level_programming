#include <stdio.h>
void printFun (void) __attribute__ ((constructor));
/**
*printFun -print
*/
void printFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
