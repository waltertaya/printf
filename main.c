#include "printfheader.h"
#include <stdio.h>

int main(void)
{
int r_value;
/*char *s = "Hello World!\n";
r_value = printstring(s);
printf("Return value: %d\n", r_value);*/
r_value = myprintf("Hello World!\n");
printf("Return value: %d\n", r_value);

char letter = 'A';
char name[] = "Johnwtcygvuajh";
int r_value2;
r_value2 = myprintf("%s %c 100%%\n", name, letter);
printf("Return value: %d\n", r_value2);

int r_value3;
r_value3 = printf("%s %c 100%%\n",name, letter);
printf("Return value: %d\n", r_value3);

return 0;
}
