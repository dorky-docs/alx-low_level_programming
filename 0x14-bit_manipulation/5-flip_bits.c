#include "main.h"

/**
 * flip_bits - this function counts the number of bits
 * from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, counter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			counter++;
	}

	return (counter);
}
