#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square.
 * @a: pointer to array.
 * @size: size of array.
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, s1, s2;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				s1 += *((a + i * size) + j);
			}
			if ((i + J) == (size - 1))
			{
				s2 += *((a + i * size) + j);
			}
		}
	}
	printf("%i, %i\n", s1, s2);
}
