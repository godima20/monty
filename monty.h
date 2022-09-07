#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK 0
#define QUEUE 1
#define DELIMS " \n\t\a\b"

/*GLOBAL OPCODE TOKENS*/
extern char **op_toks;

/**
 * struct stack_s - doubly linked list representation of a stack
 * @n: Integer
 * @prev: Points to the previous element of the stack
 * @next: Points to the next element of the stack
 *
* Description: Doubly linked list node structure for stack, queues,
* LIFO, FIFO project
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: Function to operate the opcode
 *
 * Description - Opcode and its function for stack, queue, LIFO
 * and FIFO for the project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct help - helper functions
 * @token2: pointer to token 1
 * @buffer: pointer to string returned from getline
 * @fp: pointer to file
 * @head: pointer to beginning of list
 * @line_number: line number of file
 * @n: number of bytes read
 * @token1: pointer to token 2
 * @queueflag: flag for queue function
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct help
{
	char *token2;
	char *buffer;
	FILE *fp;
	stack_t *head;
	size_t line_number;
	size_t n;
	char *token1;
	int queueflag;
} helpers;
extern helpers helpy;

void push(stack_t **head, unsigned int line_number);
void pall(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
void free_dlistint(stack_t *head);
int montyprocess(void);
void free_everything(void);
int _isnumber(void);
void pop(stack_t **head, unsigned int line_number);
void sw(stack_t **head, unsigned int line_number);
void add(stack_t **head, unsigned int line_number);
void nop(stack_t **head, unsigned int line_number);
void sub(stack_t **head, unsigned int line_number);
void divi(stack_t **head, unsigned int line_number);
void mul(stack_t **head, unsigned int line_number);
void mod(stack_t **head, unsigned int line_number);
void pstr(stack_t **head, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
int montycompare(void);
void rotl(stack_t **head, unsigned int line_number);
void rotr(stack_t **head, unsigned int line_number);
int queuepush(stack_t **head, unsigned int line_number);
#endif
