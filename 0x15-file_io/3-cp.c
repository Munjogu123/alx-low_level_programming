#include "main.h"

/**
 * file_error - checks for error in file creation or existence
 * @file1: file from
 * @file2: file to
 * @argv: array of args
 */
void file_error(int file1, int file2, char *argv[])
{
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * check_args - checks if args are correct
 * @num: no of args
 */
void check_args(int num)
{
	if (num != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: no of args
 * @argv: array of args
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_file1, close_file2;
	ssize_t r, w;
	char buffer[1024];

	check_args(argc);

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	file_error(file_from, file_to, argv);

	r = 1024;
	while (r == 1024)
	{
		r = read(file_from, buffer, 1024);
		if (r == -1)
			file_error(-1, 0, argv);
		w = write(file_to, buffer, r);
		if (w == -1)
			file_error(0, -1, argv);
	}

	close_file1 = close(file_from);
	close_file2 = close(file_to);
	if (close_file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close_file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
