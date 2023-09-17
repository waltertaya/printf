#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for. Ex: %s, %c, %i, etc.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
format_t p[] = {
{"%s", printstring}, {"%c", printchar},
{"%%", print37},
{"%b", printbinary},
{"%r", printallstring}

};

va_list args;

int idx, length = 0, j;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
for (idx = 0; format[idx] != '\0'; idx++)
{
j = 13;
while (j >= 0)
{
if (p[j].identifier[0] == format[idx] && p[j].identifier[1] == format[idx + 1])
{
length += p[j].func(args);
idx += 2;
goto Here;
}
j--;
}
put_char(format[idx]);
length++;
}
va_end(args);
return (length);
}
