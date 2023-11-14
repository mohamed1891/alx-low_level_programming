#include "main.h"
/**
 * flip_bits - calculates number of bits needed be flipped to get from n to m.
 * @n: the number
 * @m: the desired number
 * Return: number of bits required to be flipped to reach the desired number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
