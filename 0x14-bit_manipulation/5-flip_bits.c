#include "main.h"

/**
 * flip_bits -it  counts number of bits set to 1
 * in a unique variable NUM.
 *
 * @n:the first number. 
 *
 * @m: 2nd number.
 *
 * Return: number of bits set to 1 in NUM
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current;
	unsigned long int NUM = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = NUM >> x;
		if (current & 1)
			count++;
	}

	return (count);
}

