#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * create_file - to create file
 *
 * @filename: file to be created
 * @text_content: string
 * Return: 1 if successful and -1 if failed
 */

int create_file(const char *filename, char *text_content)
{

	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

/*because you will be opening, creating abd truncating the file */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);

	if (fd == -1)
	{
		return (-1);
	}
/* if text_content is equal to null, then creaye emty file.*/
 /* I dont know how to create file so i'll dp the opposit*/
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		ssize_t rit = write(fd, text_content, len);

		if (rit == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
