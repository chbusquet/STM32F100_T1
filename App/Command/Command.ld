  .command (READONLY):
  {
    . = ALIGN(4);
	_start_command 	= .;
    KEEP(*(.command))        		/* .command sections (code) */
    _end_command 	= .;    	
    . = ALIGN(4);
    *(.help_command)
  } >FLASH