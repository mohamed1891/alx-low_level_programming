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
	ssize_t Op, b_Read, b_Written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	Op = open(filename, O_RDONLY);
	b_Read = read(Op, buffer, letters);
	b_Written = write(STDOUT_FILENO, buffer, b_Read);

	if (Op == -1 || b_Read == -1 || b_Written == -1 || b_Written != b_Read)

	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(Op);

	return (b_Written);
}
