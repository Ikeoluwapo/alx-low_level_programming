#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * use putchar to print the alphabets(a-z) in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
