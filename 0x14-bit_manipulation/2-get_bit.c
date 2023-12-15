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
	return ((index >= sizeof(n) * 8) ? (-1) : (n >> index & 1));
}
