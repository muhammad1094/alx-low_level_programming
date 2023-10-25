#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of square matrix of integers
 * @a: 2d array og int types
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int itr, s1 = 0, s2 = 0;

	for (itr = 0; itr < size; itr++)
	{
		s1 += a[itr];
		s2 += a[size - itr - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
