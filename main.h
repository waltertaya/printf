#ifndef MAIN_H
#define MAIN_H

// Includes standard library headers

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match conversion specifier for printf
 * @type: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @func: function pointer to the function that prints the specifier
 */

typedef struct format
{
char *identifier;   // identifier - s, c, i, d, u, o, x, X, p, r, R   = id
int (*func)();   // function pointer  - f
} format_t;

// Function prototypes
put_char(char c);
int printchar(va_list args);
int printstring(va_list args);
int print37(void);
int printallstring(va_list args);
int printint(va_list args);
int printbinary(va_list args);
int strlength(char *s);
int strlengthconst(const char *s);
int _printf(const char *format, ...);

#endif // MAIN_H
