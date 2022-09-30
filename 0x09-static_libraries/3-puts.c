#include "main.h"

/**
 * _puts -check if a number is greater than 0
 * @str: The number to be checked
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
