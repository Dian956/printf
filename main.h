#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

void print_binary(unsigned int num);
void int_print(int num);
int integers_count(int n);
int _sendchar(char c);
int _puts(char *c);

int _printf(const char *format, ...);

#endif
