#include <stdio.h>

/**
 * main -Entry point
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	return (0);
}
