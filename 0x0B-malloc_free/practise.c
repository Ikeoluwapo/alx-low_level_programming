#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float *ptr1, *ptr2;
	int max = 0;

	printf("enter the total number of float");
	scanf("%d\n", &max);

	int size;
	int i;
	ptr1 = malloc(sizeof(float) * size); 
	ptr2 = calloc(sizeof(float), size);
	if (ptr1 == NULL)
	{
		printf ("malloc has error\n");
		return (1);
	}
	else if (ptr2 == NULL)
	{
		printf ("calloc has error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < size; i++)
		printf("%f\n, %f\n", ptr1[0], ptr2[0]);
		return (0);
	}
	free (ptr1);
	free (ptr2);
	return (0);
}
