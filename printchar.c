#include "printfheader.h"

/**
* printchar - prints a character
* @t: character to be printed
* Return: number of characters printed
*/

void printchar(char t)
{
write(1, &t, 1);
}
