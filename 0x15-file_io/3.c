#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	FILE *fpfrom *fpto;

	int fd;

	if (access(argv[1], R_OK) != 0)
	{
		print("Error: Can't read from file\n");
		exit(98);
	}

	fpfrom  = fopen(argv[1], "r");
	if (fpfrom == NULL)
	{
		printf (" Error: Can't open from file NAME_OF_THE_FILE\n");
		fclose(fpfrom);
		exit(1);
	}

	fpto = fopen(argv[2], "w");
	if (fpto == NULL)
	{
		printf ("Error: can't ooen to write\n");
		fclose(fpto);
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
	if (fd_to == -1)
	{
		printf ("Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	if (close(fd) == -1)
	{
		printf("Error: Can't close fd FD_VALUE\n");
	}
	while ((byte_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (byte_read == -1)
		{
			printf("Error: Can't read from file\n");
			exit(98);
		}
	}
	fclose(fpfrom);
	fclose(fp);
	fclose(fpto);
	return (0);
}
