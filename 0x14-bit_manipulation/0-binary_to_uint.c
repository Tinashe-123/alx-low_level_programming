#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number in integer
 */

unsigned int binary_to_uint(const char *b)
{
	int length = 0, base = 1;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[length] != '\0')
	{
		length++;
	}
	length--;
	while (length >= 0)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		if (b[length] == '1')
		{
			sum += base;
		}
		base *= 2;
		length--;
	}
	return (sum);
}
