#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024

int main(int argc, char **argv)
{
	FILE *fpfrom, *fpto;
	int byte_read;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	if (access(argv[1], R_OK) != 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fpfrom = fopen(argv[1], "r");
	if (fpfrom == NULL)
	{
		fprintf(stderr, "Error: Can't open from file %s (%s)\n", argv[1], strerror(errno));
		exit(1);
	}
	fpto = fopen(argv[2], "w");
	if (fpto == NULL)
	{
		fprintf(stderr, "Error: Can't open to write %s (%s)\n", argv[2], strerror(errno));
		fclose(fpfrom);
		exit(1);
	}
	if (truncate(argv[2], 0) != 0)
	{
		fprintf(stderr, "Error: Can't truncate file %s (%s)\n", argv[2], strerror(errno));
		fclose(fpfrom);
		fclose(fpto);
		exit(1);
	}

	while ((byte_read = fread(buf, 1, BUF_SIZE, fpfrom)) > 0)
	{
		if (fwrite(buf, 1, (size_t) byte_read, fpto) != (size_t) byte_read)
		{
			fprintf(stderr, "Error: Can't write to file %s (%s)\n", argv[2], strerror(errno));
			fclose(fpfrom);
			fclose(fpto);
			exit(99);
		}

	}
	if (byte_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s (%s)\n", argv[1], strerror(errno));
		fclose(fpfrom);
		fclose(fpto);
		exit(98);
	}
	fclose(fpfrom);
	fclose(fpto);
	return (0);
}
