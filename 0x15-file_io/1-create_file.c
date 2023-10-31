#include "main.h"


/**
 * create_file - Create a file object
 * @filename: Is the name of the file to create.
 * @text_content: Is a NULL terminated string to write to the file.
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int folder, length, w;

	if (filename == NULL)
	{
		return (-1);
	}

	folder = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (folder == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
		{
			length++;
		}

		w = write(folder, text_content, length);

		if (w == -1)
		{
			close(folder);
			return (-1);
		}
	}

	close(folder);

	return (1);
}
