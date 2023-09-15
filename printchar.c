#include "printfheader.h"

int printchar(char t)
{
    write(1, &t, 1);
}