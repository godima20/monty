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
 * struct in
