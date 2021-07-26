//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
     /*Icon*/    /*Command*/                                                              /*Interval*/  /*Signal*/
    {"\uf108 ",  "echo $(whoami)@$(hostname)",                                            0,            0},
    {"\uf1eb ",  "echo $(cat /proc/net/wireless | awk 'NR==3 {print $3}' | tr -d '.')%",  1,            1},
    {"\uf58f ",  "pactl list sinks | grep '^[[:space:]]Volume:' | awk '{print $5}'",      0,            1},
    {"\uf042 ",  "echo $(xbacklight -get | cut -d. -f1)%",                                0,            2},
    {"\uf240 ",  "echo $(cat /sys/class/power_supply/BAT0/capacity)%",                    1,            0},
    {"\uf2db ",  "free -h | awk 'NR == 2 {print $3}'",                                    1,            0},
    {"\uf133 ",  "date '+%A %d %B'",                                                      1,            0},
    {"\uf017 ",  "date '+%H:%M:%S'",                                                      1,            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
