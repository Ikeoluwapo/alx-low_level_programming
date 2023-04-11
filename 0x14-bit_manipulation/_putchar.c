#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - put
 * @c: character
 * Return: 0
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
