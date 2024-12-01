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
};

int nop2(char *c)
{
	return -1;
};


#if 0 // GNU Implementation
void quit_command(){};
void help_command(){};

#define COMMAND(NAME)  { #NAME, NAME ## _command }
struct command
{
  char *name;
  void (*function) (void);
};

struct command commands[] =
{
  COMMAND (quit),
  COMMAND (help),
};
#endif

REGISTER_COMMAND_EX_HELP (nop2, "do nothing");

REGISTER_COMMAND_EX (nop2);

//REGISTER_COMMAND
struct a_command NOP = {
		.command_name = "nop",
		.command_help_string = "do nothing",
		.funname	= nop,
};
// REGISTER_COMMAND(struct a_command NOP);

//REGISTER_INT_COMMAND((struct a_command) NOP);
