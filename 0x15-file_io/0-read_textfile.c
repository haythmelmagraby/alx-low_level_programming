#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read file count of letters
 * @filename: pointer to array of character which hold file name
 * @letters: the count of letter to read untill
 *
 * Return: the letter count if (SUCCESS) or 0 if (Faild)
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fptr;
	char buff[1024 * 8];
	ssize_t size;

	if (!filename || !letters)
	{
		return (0);
	}
	fptr = open(filename, O_RDONLY);

	if (fptr == -1)
	{
		return (0);
	}
	size = read(fptr, &buff[0], letters);
	size = write(STDOUT_FILENO, &buff[0], size);
	close(fptr);
	return (size);
}
