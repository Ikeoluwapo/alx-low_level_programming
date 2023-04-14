#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - to read and print text in file
 * @letters: no of letters to read and print
 * @filename: name of file
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char ch;
	char *buffer;

	FILE *fp = NULL;
	size_t count = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}


	while ((ch = fgetc(fp)) != feof(fp) && count < letters)
	{
		printf("%c/n", ch);
		count++;
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	count = fread(buffer, sizeof(char), letters, fp);

	fclose(fp);
	free(buffer);
	return (count);
}
