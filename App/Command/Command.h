/*
 * Command.h
 *
 *  Created on: Dec 1, 2024
 *      Author: cbusq
 */

#ifndef COMMAND_COMMAND_H_
#define COMMAND_COMMAND_H_

/**
 * What is a command
 *
 * It's a name, eventually followed by parameters and an help string.
 * once the name is found we should execute a procedure.
 */

//#define REGISTER_INT_COMMAND(cmd)	__attribute__ ((section(".command"))) ((cmd))

#define REGISTER_COMMAND	__attribute__ ((section(".command")))


struct a_command {
	const char		*command_name;
	const char 		*command_help_string;
	int				(*funname)(char *command_parameters);
};

#define REGISTER_COMMAND_EX(NAME/*, help*/) __attribute__ ((section(".command"))) \
	struct a_command NAME ## _structh = { 			\
			.command_name 			= #NAME, 		\
	/*		.command_help_string	= (help),*/		\
			.funname				= (NAME),		\
	};

#define REGISTER_COMMAND_EX_HELP(NAME, help) __attribute__ ((section(".command"))) \
	struct a_command NAME ## _struct = { 			\
			.command_name 			= #NAME, 		\
			.command_help_string	= (help),		\
			.funname				= (NAME),		\
	};

//int nop(char *c);

#endif /* COMMAND_COMMAND_H_ */
