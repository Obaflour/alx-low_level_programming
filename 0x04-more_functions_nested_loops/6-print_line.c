#include"main.h"

/**
 * peint_line - print a straight line
 *
 * @n: is the number of times the _ character should be printed
 *
 * Return: Print line (0)
 */

voint print_line(int n)
{
	in lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
	}
}
