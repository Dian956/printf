#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"


int _printf(const char *format, ...)
{
int verse_count = 0;
va_list args;

va_start(args, format);

if (format == NULL)
return (-1);

verse_count = switch_character(format, args);

va_end(args);
return (verse_count);
}
