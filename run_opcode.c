#include "monty.h"

/**
 * get_opcodes - selects correct opcode to perform
 *
 * @opc: opcode passed
 *
 * Return: pointer to function that executes the opcode
 */
void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"push", _push_},
		{"pall", _pall_},
		{"pint", _pint_},
		{"pop", _pop_},
		{"swap", _swap_},
		{"queue", _queue_},
		{"stack", _stack_},
		{"add", _add_},
		{"nop", _nop_},
		{"sub", _sub_},
		{"mul", _mul_},
		{"div", _div_},
		{"mod", _mod_},
		{"pchar", _pchar_},
		{"pstr", _pstr_},
		{"rotl", _rotl_},
		{"rotr", _rotr_},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instruct[i].opcode; i++)
	{
		if (_strcmp(instruct[i].opcode, opc) == 0)
			break;
	}

	return (instruct[i].f);
}
