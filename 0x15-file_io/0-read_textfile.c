#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - to read and print text in file
 * @fp: pointer to File
 * @ch: variable
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char ch;
	FILE *fp = NULL;
	size_t count = 0;

	fp = fopen (filename, "r");
	
	if (fp == NULL)
	{
	       	return (0);
	}
	
	while ((ch = fgetc(fp)) != feof(fp) && count < letters)
	{	
		printf("%c/n", ch);
		count++;
	}
	fclose (fp);
	return (count);
}
