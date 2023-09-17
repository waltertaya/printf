#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for. Ex: %s, %c, %i, etc.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
int i = 0, j = 0, count = 0;
va_list args;
format_t p[] = {
{"%s", printstring}, {"%c", printchar},
{"%%", print37}, {"%i", printint},
{"%d", printint}, {"%b", printbinary},
{"%u", printuint}, {"%o", printoctal},
{"%x", printhex}, {"%X", printhexc},
{"%r", printallstring}, {"%R", printrot13},

};

va_list args;

int idx, j ,length = 0;

va_start(args, format);
if(format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
for(idx = 0; format[idx] != '\0'; i++)
{
j = 13;
while (j >= 0)
{
if (p[j].identifier[0] == format[idx] && p[j].identifier[1] == format[idx + 1])
{
length += p[j].func(args);
idx +=2;
goto Here;
}
j--;
}
_putchar(format[idx]);
length++;
}
va_end(args);
return (length);
}