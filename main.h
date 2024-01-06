#ifndef MAIN_H
#define MAIN_H

/*main.h files*/

/*included libraries*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


/*prototype included*/
int _printf(const char *format, ...);
int _putchar(int c);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);

#endif
