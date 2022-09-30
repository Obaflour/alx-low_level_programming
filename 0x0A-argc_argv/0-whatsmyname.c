#include <stdio.h>

/**
 * main - writes its name
 * @argc: argument count
 * @argv: array of pointers to arguement strings
 * Return: 0
 */

int main(int arg, char *argv[])
{
	arg = argc;
	printf("%s\n", *argv);
	return (0);
}
