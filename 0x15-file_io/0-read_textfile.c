#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to
 * the POSIX standard output.
 * @filename: input filrname
 * @letters: input number of letters
 * Return: the actual number of letters it could read
 * and print if the file can not be opened or read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
