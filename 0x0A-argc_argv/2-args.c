#include <stdio.h>
/**
 * main -  prints all arguments it receives.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%s\n", argv[3]);
	printf("%s\n", argv[4]);
	printf("%s\n", argv[5]);
	printf("%s\n", argv[6]);
	printf("%s\n", argv[7]);
	return (0);
}

