#include "main.h"
/**
 * flip_bits - counts number of bits to change
 * from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count1 = 0;
	unsigned long int current1;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current1 = exclusive >> k;
		if (current1 & 1)
			count1++;
	}
	return (count1);
}
