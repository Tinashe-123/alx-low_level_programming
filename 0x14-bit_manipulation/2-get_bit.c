#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the input bit
 * @index: index, starting from 0 of the bit
 * Return:  value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int peak = 0x01;

	peak <<= index;
	if (peak == 0)
	{
		return (-1);
	}
	if ((n & peak))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
