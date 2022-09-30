#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always return 1 on success.
 * on error, -1 is returned, and erro is set appropriately.
 *
 */

int _putcar(char c)
{
	return (write(1, &c, 1));
}
