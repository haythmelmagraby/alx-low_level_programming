#include "main.h"

/**
 * set_bit - change the bit from 0 to 1
 * @n: the long int pointer
 * @index: the index to chang the bite value
 *
 * Return: (1) if (SUCCESS) and (-1) if faild
 **/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= 1ul << index;

	return (1);
}
