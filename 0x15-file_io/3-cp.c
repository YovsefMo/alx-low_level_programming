#include "main.h"

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, error codes on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t byread, bywrite;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);

	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		return (99);
	}

	while ((byread = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bywrite = write(file_to, buffer, byread);
		if (bywrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			return (99);
		}
	}

	if (byread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		return (98);
	}

	close(file_from);
	close(file_to);
	return (0);
}
