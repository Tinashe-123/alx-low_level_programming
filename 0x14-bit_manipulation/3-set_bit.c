#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the input integer
 * @index: index, starting from 0 of the bit you want to set
 * * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int peak;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	peak = 1;
	*n = *n | (peak << index);
	return (1);
}
