#include "main.h"
#include <stdio.h>

/**
 * main - function that checks for uppercase character.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	int _isupper(int c)
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
