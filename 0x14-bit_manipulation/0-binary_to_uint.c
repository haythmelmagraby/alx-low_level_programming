#include "main.h"

/**
 *binary_to_uint - convert binary to unsigned int
 * @b: the binary array to convert to unsigned int
 *
 * Return: result of convert
 **/

unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;

	if (b)
	{
		while (*b)
		{
			if (*b == '0' || *b == '1')
			{
				/* multply by 2*/
				result <<= 1;
				/* add b value to result or '0'*/
				result += *b - '0';
				*b++;
			} else
			{
				return (0);
			}
		}

	} else
	{
		return (0);
	}

	return (result);
}
