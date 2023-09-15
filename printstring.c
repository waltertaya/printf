#include "printfheader.h"

int printstring(char *s)
{
    int index = 0,counts = 0;
    while(s[index] != '\0')
    {
        printchar(s[index]);
        index++;
        counts++;
    }
    return counts;
}