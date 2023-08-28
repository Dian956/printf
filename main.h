#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
int _printf(const char *format, ...);
int _sendchar(char c);
void print_binary(unsigned int num);
void print_hex(unsigned int num, int k);
void int_print(int num);
int integers_count(unsigned int n, int ct);
void print_octal(unsigned int num);
int _puts(char *str);
int _puts(char *c);
void print_unsigned(unsigned int num);

#endif
