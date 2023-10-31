#include "main.h"




/**
 * read_textfile - Function that reads a file and prints the content of file.
 * @filename: File name
 * @letters: File content
 * Return: content of file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead = fread(buffer, 1, letters, file);
	FILE *file = fopen(filename, "r");
	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	char *buffer = (char *)malloc(letters);


	if (filename == NULL)
	{
		return (0);
	}

	if (file == NULL)
	{
		return (0);
	}


	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	if (bytesRead <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	if (bytesWritten <= 0 || (size_t)bytesWritten < bytesRead)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (bytesRead);
}
