About

Monty is a bytecode interpreter that I built for Alx project 0x19 C -
Stacks, Queues, - LIFO, FIFO.

Resources

* Google
* How to use extern to share variables between source files in C
* Functioning with submodules

Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You allowed to use a maximum of one global variable
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called monty.h
* Don’t forget to push your header file
* All your header files should be include guarded
* You are expected to do the tasks in the order shown in the project

The Monty Language

* Monty 0.98 is a scripting language that is firt compiled into monty
byte codes (just like python). It depends on unique stack, having specific instructions
to manipulate it.
The objective of this project is to establish an intepreter for monty Bytecodes files.

Monty byte code files

* Files containing monty byte codes usually have the .m extension. Most
of the industries utilizes this standard but it is not neccessary by the language
specification. 

LIFO and FIFO

* FIFO - First in, First out. A method for organizing and manipulating a data
buffer.
* LIFO - Last in, First Out. The order which elements comes off a stack.

Stacks and Queues

* stacks - storing elements in LIFO style, data area or buffer used for
storing requests that need to be handled.
* Queues - Storing elements in FIFO style, and contains elements in
precisely the order they were added.

push, pall, pint, pop, swap, add, nop

* push - The opcode push pushes an element to the stack.
* pall - The opcode pall prints all the values on the stack, starting
from the top of the stack.
* pint - The opcode pint prints the value at the top of the stack,
followed by a new line.
* pop -  The opcode pop removes the top element of the stack.
* swap - The opcode swap swaps the top two elements of the stack.
* add - The opcode add adds the top two elements of the stack.
* nop - The opcode nop doesn’t do anything.
* sub - The opcode sub subtracts the top element of the stack from the
second top element of the stack.
* div - The opcode div divides the second top element of the stack by
the top element of the stack.
* mul - The opcode mul multiplies the second top element of the stack
with the top element of the stack.
* mod - The opcode mod computes the rest of the division of the second
top element of the stack by the top element of the stack.
* comments - When the first non-space character of a line is #, treat
this line as a comment (don’t do anything).
* pchar - The opcode pchar prints the char at the top of the stack,
followed by a new line.
* pstr -  The opcode pstr prints the string starting at the top of the
stack, followed by a new line.
* rotl - The opcode rotl rotates the stack to the top.
* rotr - The opcode rotr rotates the stack to the bottom.
* stack - The opcode stack sets the format of the data to a stack (LIFO). 
This is the default behavior of the program.
* queue - The opcode queue sets the format of the data to a queue (FIFO).

Author: Gyvira Owiti Odima(godima20@gmail.com)(Twitter:@kegman19)(linkedin:gyvira odima)
