#include "printfheader.h"

/**
* printchar - prints a character
* @t: character to be printed
* Return: number of characters printed
*/

int printchar(char t)
{
write(1, &t, 1);
}
