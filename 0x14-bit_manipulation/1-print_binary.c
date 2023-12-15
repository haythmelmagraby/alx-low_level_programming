#include "main.h"

/**
 * print_binary - convert unsigned long int to binary
 * @n: number to be converted
 *
 * print n after convert
 **/

void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, counter = 0;

	while (bits > 0)
	{
		if (n >> --bits & 1)
		{
			_putchar('1');
			counter++;
		} else if (counter)
		{
			_putchar('0');
		}
	}
	if (!counter)
		_putchar('0');
}
