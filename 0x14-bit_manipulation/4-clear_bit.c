#include "main.h"

/**
 * clear_bit - clear bit at given index
 * @n: the long int pointer
 * @index: the index to chang the bite value
 *
 * Return: (1) if (SUCCESS) and (-1) if faild
 **/


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	if (*n & 1ul << index)
		*n ^= 1ul << index;

	return (1);
}
