#include "main.h"

/**********prints char******/

/**
 * print_char - prints a character
 * @list: list of arguments
 * Return: number of characters printed
 */
int print_char(va_list list)
{
char c;

c = va_arg(list, int);
return write(1, &c, 1);
}


/*******prints string*************/
/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: number of characters printed
 */
int print_string(va_list list)
{
int i;
char *str;

str = va_arg(list, char *);
if (str == NULL)
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
{
write(1, &str[i], 1);
}
return (i);
}
