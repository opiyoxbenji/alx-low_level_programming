#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - function excuted before the main
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
