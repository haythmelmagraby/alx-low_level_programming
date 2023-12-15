#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index){
	if (index >= sizeof(*n) * 8)
                return (-1);

	if(*n & 1ul << index)
                *n ^= 1ul << index;

        return (1);

}
