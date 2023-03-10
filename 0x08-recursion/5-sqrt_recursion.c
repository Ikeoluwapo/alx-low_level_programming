#include <stdio.h>
#include "main.h"

/**
 * find_sqrt - find natural square roots
 * @n: natural square root
 * @root: number
 * Return: square root
 */

int find_sqrt(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	if (root == n / 2)
	{
		return (-1);
	}
	return (find_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural square root
 *
 * Return: return -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}
