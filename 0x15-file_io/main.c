#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd2 = creat(argv[2], 0664);
	fd2 = open(fd2, O_WRONLY);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	for (; *argv[1] != '\0'; argv[1]++)
		write(fd1, fd2, 1024);
	return (1);
}

