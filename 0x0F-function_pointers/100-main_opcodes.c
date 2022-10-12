#include <stdio.h>
#include <stdlib.h>
#incclude <udis86.h>

/**
 * main - Entry point
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int val = 0, i = 0;

	if (argc == 2)
	{
		val = atoi(argv[i]);

		if (val < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], val);
		ud_set_mode(&ud_obj, 64);
		ud_set_sytanx(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}
