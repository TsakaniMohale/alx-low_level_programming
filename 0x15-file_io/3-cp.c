#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * exitWithError - Function to handle errors and exit.
 * @argc: Total number of arguments passed on the command.
 * @argv: Array of values of the arguments on the command.
 * @file1: File descriptor for the source file.
 * @file2: File descriptor for the destination file.
 */

void exitWithError(int argc, char *argv[], int file1, int file2)
{
	const char *usageError = "Usage: %s file_from file_to\n";
	const char *readError = "Error: Can't read from %s\n";
	const char *writeError = "Error: Can't write to %s\n";
	const char *closeError = "Error: Can't close fd %d\n";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, usageError, argv[0]);
		exit(97);
	} else if (file1 == -1)
	{
		dprintf(STDERR_FILENO, readError, argv[1]);
		exit(98);
	} else if (file2 == -1)
	{
		dprintf(STDERR_FILENO, writeError, argv[2]);
		exit(99);
	} else if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, closeError, file1);
		exit(100);
	} else if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, closeError, file2);
		exit(100);
	}
}

/**
 * main - Execution begins
 * @argc: Number of argments.
 * @argv: Array of arguments
 * Return: 1 on failure or  0 on success
 */

int main(int argc, char *argv[])
{
	const char *sourceFile, *destFile;
	int sourceFileDescriptor, destFileDescriptor;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	sourceFile = argv[1];
	destFile = argv[2];
	sourceFileDescriptor = open(sourceFile, O_RDONLY);
	destFileDescriptor = open(destFile, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (sourceFileDescriptor == -1)
	{
		exitWithError(argc, argv, sourceFileDescriptor, destFileDescriptor);
	}

	while ((bytes_read = read(sourceFileDescriptor, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(destFileDescriptor, buffer, bytes_read);
		if (bytes_written == -1)
		{
			destFileDescriptor = -1;
			exitWithError(argc, argv, sourceFileDescriptor, destFileDescriptor);
		}
	}
	exitWithError(argc, argv, sourceFileDescriptor, destFileDescriptor);
	return (0);
}

