#include "printfheader.h"

/**
 * printstring - prints a string
 * @s: string to be printed
 * Return: number of characters printed
 * Description: prints a strings
*/

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
