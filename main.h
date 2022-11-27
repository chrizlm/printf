#ifndef MAIN_H
#dedine MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
char *create_space(void);
char *_handle_format(char *format, char *ft, va_list list);
_handle_string(char *format, va_list list);
_handle_char(char *format, va_list list);
int num_char(char *string_input);

#endif
