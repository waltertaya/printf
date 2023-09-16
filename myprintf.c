#include "printfheader.h"

int myprintf(const char *format, ...)
{
    unsigned h = 0,count = 0;
    va_list args;
    va_start(args, format);
    while(format[h] != '\0')
    {
        if(format[h] != '%'){
            printchar(format[h]);
        }
        else if(format[h + 1] == 'c'){
            printchar(va_arg(args, int));
            h++;
        }
        else if(format[h + 1] == 's'){
            int r_value = printstring(va_arg(args, char *));
            h++;
            count += (r_value - 1);
        }
        else if(format[h + 1] == '%'){
            printchar('%');
            h++;
        }
        count++;
        h++;
    }
    return count;
}