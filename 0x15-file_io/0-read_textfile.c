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
	char buff[1000];
	ssize_t size;

	fptr = open(filename, O_RDONLY);

	if (fptr == -1)
	{
		exit(0);
	} else
	{
		size = read(fptr, buff, letters);
		if (size == -1)
		{
			exit(0);
		} else
		{
			size = write(STDOUT_FILENO, &buff[0], size);
			return (size);
		}
	}
}
