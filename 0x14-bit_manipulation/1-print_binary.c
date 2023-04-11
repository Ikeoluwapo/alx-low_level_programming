#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	int j;
	
	unsigned long int num = 0;

	for (i = 0; i <= n; i++)
	{
		num = n % 2;
		
		n = n / 2;
	}
	for (j = i - 1; j >= 0; j--) 
	{
		printf("%ld", num);
	}
}
