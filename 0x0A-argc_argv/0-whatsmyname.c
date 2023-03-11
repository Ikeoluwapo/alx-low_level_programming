#include <stdio.h>

/**
 * main - prints name of program
 * @argc: string count
 * @argv: array of pointers to string
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
