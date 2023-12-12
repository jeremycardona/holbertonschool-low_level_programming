#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append text at the end of a file.
 * Description: function that appends text at the end of a file.
 * Return: 1 if file exists. -1 if file does not exist or
 * permissions are required to access
 * @filename: name of the file to append content
 * @text_content: string to append into file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int text_length;
	int read_write;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		text_length = strlen(text_content);

		read_write = write(file_descriptor, text_content, text_length);
		if (read_write == -1)
			return (-1);
	}
	close(file_descriptor);

	return (1);
}
