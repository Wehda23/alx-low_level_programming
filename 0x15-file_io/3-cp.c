#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguements.
 * @argv: list of argurments.
 * Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
	int source, new;
	int r, close_source, close_new;
	char buffer[1024];

	if (argc > 3 || argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(*(argv + 1), O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	new = open(*(argv + 2), O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((r = read(source, buffer, 1024)) > 0)
	{
		if (new == -1 || (write(new, buffer, r) != r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(argv + 2));
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	close_source = close(source);
	if (close_source < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", source), exit(100);
	close_new = close(new);
	if (close_new < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", new), exit(100);
	return (0);
}
