#include "main.h"

/**
 * get_endianness - this is how storing data in little memory and bi memory
 *
 * Return: 0 or 1 depend on it save it on least or most
 **/

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
