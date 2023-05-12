#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function that create file
 *
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 for success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd2;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (; *text_content != '\0'; text_content++)
	{
		fd2 = write(fd, text_content, 1);
		if (fd2 == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

