#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - create a file
 * Description: function that creates a file.
 * Return: 1 on success, -1 on failure.
 * @filename: file name to create
 * @text_content: string to write
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int text_length;
	int read_write;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	text_length = strlen(text_content);

	read_write = write(file_descriptor, text_content, text_length);

	if (read_write == -1)
		return (-1);
	close(file_descriptor);

	return (1);
}
