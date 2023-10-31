#include "main.h"

/**
 * set_bit - sets bit value 1.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it positive, -1 if negative.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int z;

	if (index > 63)
		return (-1);

	z = 1 << index;
	*n = (*n | z);

	return (1);
}
