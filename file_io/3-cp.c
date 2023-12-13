#include "main.h"
#include <stdio.h>

void validate_files(int, int, char **);
/**
 * main - entry point, FR!
 * Description: read and write using main argv
 * Return: 0 sucess, 99 if fails, 98 if cannot read, 97 if args are not correct.
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char **argv)
{
	int read_f, write_f, err;
	ssize_t bytes, readwrite_bytes;
	char buffo[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	read_f = open(argv[1], O_RDONLY);
	write_f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	validate_files(read_f, write_f, argv);

	bytes = 1024;
	while (bytes == 1024)
	{
		bytes = read(write_f, buffo, 1024);
		if (bytes == -1)
			validate_files(-1, 0, argv);
		readwrite_bytes = write(write_f, buffo, bytes);
		if (readwrite_bytes == -1)
			validate_files(0, -1, argv);
	}
	err = close(read_f);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_f);
		exit(100);
	}
	err = close(write_f);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_f);
		exit(100);
	}
	return (0);
}

/**
 * validate_files - check for files reads and writes
 * Description: function that checks for files values
 * @read_f: read file file_from
 * @write_f: write file file_to
 * @argv: argument vectorWhy you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
 */
void validate_files(int read_f, int write_f, char **argv)
{
	if (read_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (write_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
