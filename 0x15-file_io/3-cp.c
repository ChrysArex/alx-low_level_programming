#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: number of commande line arguments
 * @argv: array of command line arguments
 * Return: 1 on success
 */
int main(int argc, char **argv)
{
	int fd1, fd2, n;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd2 = creat(argv[2], 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	while ((n = read(fd1, buff, 1024)) != 0)
		write(fd2, buff, n);
	close(fd1);
	close(fd2);
	return (0);
}

