#include <stdio.h>
#include "main.h"

/**
 * find_prime - find prime numbers
 * @n: integer
 * @prime: prime number
 * Return: 1 if the input integer is a prime number
 */

int find_prime(int n, int prime)
{
	if (n % prime == 0)
	{
		if (n == prime)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + find_prime(n, prime + 1));
}

/**
 * is_prime_number -  input integer is a prime number
 * @n: input integer
 *
 * Return: 1 if the input integer is a prime number
 */

int is_prime_number(int n)
{
	int prime;

	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (find_prime(n, prime));
}
