#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @letters: the number of letters it should read and print
 * @filename: pointer to the textfile
 * Return: 0 if the file cannot be opened or read
 *	if filename is NULL return 0
 *	if write fails or doesn't worite the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fd, num_read, num_written;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if ((ssize_t) fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	num_read = read(fd, buff, letters);
	if ((ssize_t) num_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buff, num_read);
	if (num_written != num_read)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (num_written);
}
