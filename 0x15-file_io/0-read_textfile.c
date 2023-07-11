#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: name of the file
 * @letters: number of letter to print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f1;
	size_t size;
	char buff[4096];

	if (filename == NULL)
		return (0);
	f1 = open(filename, O_RDONLY);
	if (f1 == -1)
		return (0);

	size = read(f1, buff, letters);
	write(STDOUT_FILENO, buff, size);
	close(f1);
	return (size);
}
