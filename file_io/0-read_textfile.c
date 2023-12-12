#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read a text file and print it to POSIX
 * Description: function that reads a file and pritns it
 * to the POSIX standard output.
 * Return: actual number of letters it could read and print
 * @filename: file name
 * @letters: number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_n, write_n;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);
	read_n = read(file_descriptor, buffer, letters);
	write_n = write(STDOUT_FILENO, buffer, read_n);

	close(file_descriptor);
	free(buffer);

	return (write_n);
}
