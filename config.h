//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"sbforecast",		60,			16},
	{"",		"sbdisk",		30,			15},
	{"",		"sbmemory",		10,			14},
	{"",		"sbbattery",		10,			3},
	{"",		"sbclock",		10,			1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

