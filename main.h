#ifndef PRINTFHEADER_H
#define PRINTFHEADER_H

// Includes standard library headers

#include <unistd.h>
#include <stdarg.h>

// Function prototypes

int printchar(char t);
int _printf(const char *format, ...);
int printstring(char *s);
int printsint(int num);




#endif // _PRINTFHEADER_H
