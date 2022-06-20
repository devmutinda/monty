# Monty Bytecode Interpreter
The programs in this repo make up the **monty program** and are used to interpret monty opcodes and perform a number of operations on the stack or queue. The stacks/queues are generated by adding nodes to linked lists.

## The Monty Language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
Files containing Monty byte codes usually have the .m extension and are contained in the [bytecodes](https://github.com/devmutinda/monty/tree/main/bytecodes) directory of this repo. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:\
\
![image](https://user-images.githubusercontent.com/96857630/174581224-7f3c44be-0bcf-4981-aa78-1f2d8ca2b0b4.png)


Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:\
\
![image](https://user-images.githubusercontent.com/96857630/174581334-7d65879d-26dd-4c69-b8cb-79ecd23e0e9a.png)


## The Monty Program
### Monty instructions
* push <int>  - pushes an element(integer) to the stack
* pall - prints all the values on the stack, starting from the top of the stack
* pint - prints the value at the top of the stack
* pop - removes the top element of the stack
* swap - swaps the top two elements of the stack
* add - adds the top two elements of the stack
* nop - doesn’t do anything
* sub - subtracts the top element of the stack from the second top element of the stack
* div - divides the second top element of the stack by the top element of the stack
* mul - multiplies the second top element of the stack with the top element of the stack
* mod - computes the rest of the division of the second top element of the stack by the top element of the stack
* pchar - prints the char at the top of the stack, followed by a new line
* pstr - prints the string starting at the top of the stack, followed by a new line
* rotl - rotates the stack to the top
* rotr - rotates the stack to the bottom
* stack - sets the format of the data to a stack (LIFO); this is the default behavior of the program
* queue - sets the format of the data to a queue (FIFO)

### Compilation
The monty program compiled as follows:\
`gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty`

### Usage
Once the monty program is compiled, it's executed on the terminal as shown below:\
`./monty <filename>`

### Sample output
 ![image](https://user-images.githubusercontent.com/96857630/174581714-aeb037a4-06f4-417c-bf17-476a573bff30.png)

![image](https://user-images.githubusercontent.com/96857630/174581819-396f9712-9400-42a3-900f-1fc7f27fde59.png)

## Authors
David Kyalo
 
