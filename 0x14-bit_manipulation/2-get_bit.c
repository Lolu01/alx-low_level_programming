#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
int compute = 1 << index, check;
if (index > 63)
return (-1);
check = compute & n;
return ((check >> index) & 1);
}
