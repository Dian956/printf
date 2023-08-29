#include "main.h"
#include <stdarg.h>

void handle_unsignedint(char *output_buffer, int *count, int *buffer_index, va_list args)
{
int j_verse;
unsigned int num_verse = va_arg(args, unsigned int);
char bin_str[BUFF_SIZE];
int bin_length = 0;

do
{
bin_str[bin_length++] = (num_verse & 1) + '0';
num_verse >>= 1;
} while (num_verse > 0);

for (j_verse = bin_length - 1; j_verse >= 0; j_verse--)
{
output_buffer[(*buffer_index)++] = bin_str[j_verse];
if (*buffer_index == BUFF_SIZE)
{
*count += buffer_print(output_buffer, *buffer_index);
*buffer_index = 0;
}
}
}
