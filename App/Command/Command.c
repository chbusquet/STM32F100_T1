/*
 * Command.c
 *
 *  Created on: Dec 1, 2024
 *      Author: cbusq
 */


#include "Command.h"

struct a_command NOP REGISTER_COMMAND;

int nop(char *c)
{
	return 0;
}

//REGISTER_COMMAND
struct a_command NOP = {
		.command_name = "nop",
		.command_help_string = "do nothing",
		.funname	= nop,
};
// REGISTER_COMMAND(struct a_command NOP);

//REGISTER_INT_COMMAND((struct a_command) NOP);
