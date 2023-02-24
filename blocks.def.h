//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	  /*Command*/		                   /*Update Interval*/	/*Update Signal*/
    { " SSID ",  "/opt/dwmblocks_scripts/dwm_ssid",             1,   0 },
    { "NET ",    "/opt/dwmblocks_scripts/dwm_ipaddr",           1,   0 },
    { "MEM ",    "/opt/dwmblocks_scripts/dwm_memory",           30,  0 },
    { "",        "/opt/dwmblocks_scripts/dwm_volume withicon",  1,   10 },
    { "",        "/opt/dwmblocks_scripts/dwm_battery withicon", 1,   10 },
    { "",        "date '+%b %d (%a) %I:%M:%S %p' ",             1,   0 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
