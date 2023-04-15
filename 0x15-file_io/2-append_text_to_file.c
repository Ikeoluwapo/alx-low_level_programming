#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - to append file
 * @filename: name of file
 * @text_content: content in string
 * Return:1 if successful and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = NULL;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = fopen(filename, "a");

	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}
		/**to check of file name exists**/
	if (access(filename, F_OK) == -1)
	{
		fclose(fp);
		return (-1);
	}
		/* to chexk is permission is giveb*/
	if (access(filename, W_OK) == -1)
	{
		fclose(fp);
		return (-1);
	}

	fclose(fp);
	return (1);
}
