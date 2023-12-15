#include "main.h"

/**
 * flip_bits - how much bit we need to change con convert n to m
 * @n: the long int src
 * @m: the long int targeted
 *
 * Return: (counter) if (SUCCESS)
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int counter = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		counter += (xor & 1ul);
		xor >>= 1;
	}

	return (counter);

}
