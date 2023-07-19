#include <stdio.h>
#include <udis86.h>
#include <stdlib.h>


/**
  * main - main
  * @argc: arg count
  * @argv: str lgt
  *
  * Return: nothin.
  */

int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int t = 0;
	int x = 0;

	if (argc == 2)
	{
		t = atoi(argv[1]);

		if (t < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], t);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}

