#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - finds the last int in a random number
 *
 * Description: the numbers are generated automatically
 * Return: Always(0) Success
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d and is ", n, last_digit);
	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastn == 0)
	{
		printf("0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last than 6 and not 0\n");
	}
	return (0);
}