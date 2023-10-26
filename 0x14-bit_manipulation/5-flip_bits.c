#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: the first input
 * @m: the second input
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;
	unsigned long int flip;

	flip = n ^ m;
	result = 0;
	while (flip)
	{
		result += flip & 1;
		flip = flip >> 1;
	}
	return (result);
}
