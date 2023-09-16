#include "printfheader.h"

/**
 * printchar - prints a character
 * @t: character to be printed
 * Return: 1
 * Description: prints a character
*/

int printchar(char t)
{
write(1, &t, 1);
}
