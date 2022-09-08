#include "monty.h"

/**
 * _queue_ - sets the format of the data to a queue (FIFO)
 *
 * @doubly: head of the linked list
 * @cline: line number;
 * Return: no return
 */
void _queue_(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	glo_v.lifo = 0;
}

/**
 * _stack_ - sets the format fo the data to a stack (LIFO)
 *
 * @doubly: head of the linked list
 * @cline: line number;
 * Return: no return
 */
void _stack_(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	glo_v.lifo = 1;
}

/**
 * _add_ - adds the top two elements of the stack
 *
 * @doubly: head of the linked list
 * @cline: line number;
 * Return: no return
 */
void _add_(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		fprintf(2, "L%u: can't add, stack too short\n", cline);
		free_glo_v();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop_(doubly, cline);
}

/**
 * _nop_ - doesn't do anythinhg
 *
 * @doubly: head of the linked list
 * @cline: line number;
 * Return: no return
 */
void _nop_(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}

/**
 * _sub_ - subtracts the top element to the second top element of the stack
 *
 * @doubly: head of the linked list
 * @cline: line number;
 * Return: no return
 */
void _sub_(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_glo_v();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	_pop_(doubly, cline);
}
