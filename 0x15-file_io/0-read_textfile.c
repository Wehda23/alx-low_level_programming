#include "main.h"

/**
 * read_textfile - function that reads the text entered from system.
 * @filename: the words in the file in form of a character pointer.
 * @letters: number of letters in the file.
 * Return: The number of letters of the file printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int folder, read_, write_;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(sizeof(char) * letters);

	if (c == NULL)
		return (0);

	folder = open(filename, O_RDONLY, 600);

	if (folder == -1)
	{
		free(c);
		return (0);
	}

	read_ = read(folder, c, letters);

	if (read_ == -1)
	{
		free(c);
		return (0);
	}

	write_ = write(STDOUT_FILENO, c, read_);

	if (write_ != read_ || write_ == -1)
	{
		return (0);
	}

	free(c);
	close(folder);

	return (write_);
}
