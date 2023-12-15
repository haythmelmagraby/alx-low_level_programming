#include "main.h"

/**
 * get_bit - to return the bit in spesific index
 * @n: the integer number
 * @index: where return bit should be
 *
 * Return: the bit of index from n
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
