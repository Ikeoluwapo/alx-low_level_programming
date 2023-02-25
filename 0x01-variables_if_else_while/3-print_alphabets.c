#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * use putchar to print the alphabets(a-z) in lowercase and (A-Z) in uppercase
 *
 * Return: 0
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; j = 'A'; j = 'Z';)
		i++, j++
	{
		putchar(i);
		putchar(j);
	}
	putchar('\n');
	return (0);
}
