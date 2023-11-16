#include "main.h"

/**
 * create_file - Creates a file with the given name
 * and writes the text content.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int Op, WriteStatus;
	int Permissions = S_IRUSR | S_IWUSR;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	Op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, P);
	if (Op == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;

		WriteStatus = write(Op, text_content, text_len);
		if (WriteStatus == -1)
		{
			close(Op);
			return (-1);
		}
	}

	close(Op);
	return (1);
}
