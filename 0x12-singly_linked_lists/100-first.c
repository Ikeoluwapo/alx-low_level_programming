#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

void print_tortoise_string(void) __attribute__ ((constructor));

void print_tortoise_string(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
