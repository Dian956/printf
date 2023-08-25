#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

void print_hex(unsigned int num, int k);
void print_unsigned(unsigned int num);
void print_octal(unsigned int num);
void print_binary(unsigned int num);
void int_print(int num);
int integers_count(int n);
int _sendchar(char c);
int _puts(char *c);

int _printf(const char *format, ...);

#endif
