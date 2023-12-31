#include "main.h"

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
	char *buff;
	ssize_t size,sizet;

	if (!filename || !letters)
	{
		return (0);
	}
	fptr = open(filename, O_RDONLY);

	if (fptr == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}
	size = read(fptr, buff, letters);
	if(size == -1)
	{
		return (0);
	}
	sizet = write(STDOUT_FILENO, buff, size);
	free(buff);
	close(fptr);
	if(sizet != size || sizet == -1)
	{
	return (0);
	}
	return (sizet);
}
