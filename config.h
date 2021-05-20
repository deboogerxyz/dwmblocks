/* modify this file to change what commands output to your statusbar, and recompile using the make command */
static const Block blocks[] = {
	/* icon */	/* command */		/* update interval */	/* update signal */
	{"",		"sbmusic",		10,			6},
/*	{"",		"sbforecast",		300,			5}, */
/*	{"",		"sbdisk",		60,			4}, */
	{"",		"sbmemory",		10,			3},
	{"",		"sbbattery",		10,			2},
	{"",		"sbclock",		10,			1},
};

/* sets delimeter between status commands. NULL character ('\0') means no delimeter */
static char delim[] = " ";
static unsigned int delimLen = 5;

