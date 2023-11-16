#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Op, bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	Op = open(filename, O_RDONLY);
	bytesRead = read(Op, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (Op == -1 || bytesRead == -1 || bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(Op);

	return (bytesWritten);
}
