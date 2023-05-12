#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: string to add at the end of the
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd2;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
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
