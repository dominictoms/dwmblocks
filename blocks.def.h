//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/                                                          /*Interval*/  /*Signal*/
    {"",        "hostname",                                                          0,            0},
    {"",        "amixer sget Master | awk -F '[][]' '/%/ { print $2 }' | head -n1",  0,            1},
    {"",        "echo $(cat /sys/class/power_supply/BAT0/capacity)%",                1,            0},
    {"",        "echo $(free -m|awk 'NR==2{print$3}')M",                             1,            0},
    {"",        "date +%A' '%B' '%d' '%H:%M:%S",                                     1,            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
