#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * main - to copy file to a new file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{

	FILE *fpfrom, *fpto;

	int byte_read, fd;

	char buf[BUF_SIZE];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	if (access(argv[1], R_OK) != 0)
	{
		printf("Error: Can't read from file\n");
		exit(98);
	}

	fpfrom = fopen(argv[1], "r");
	if (fpfrom == NULL)
	{
		printf("Error: Can't open from file %s\n", argv[1]);
		exit(1);
	}
	fpto = fopen(argv[2], "w");
	if (fpto == NULL)
	{
		printf("Error: Can't open to write\n");
		fclose(fpfrom);
		exit(1);
	}
	if (access(argv[2], F_OK) == 0)
	{
		if (truncate(argv[2], 0) != 0)
		{
			fclose(fpto);
			exit(1);
		}
	}
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		fclose(fpto);
		exit(99);
	}
	while ((byte_read = fread(buf, 1, BUF_SIZE, fpfrom)) > 0)
	{
		if (byte_read == -1)
		{
			printf("Error: Can't read from file\n");
			exit(98);
		}
		if (write(fd, buf, byte_read) != byte_read)
		{
			printf("Error: Can't write to file\n");
			exit(99);
		}
	}
	fclose(fpfrom);
	fclose(fpto);
	close(fd);

	return (0);
}
