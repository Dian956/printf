#include "main.h"
/**
* print_hex - prints the hexadecimal representation
* @num: input
* @k: input count int
*
*/
void print_hex(unsigned int num, int k)
{
int j, i = 0, hex_digits[32];

if (num == 0)
{
_sendchar('0');
return;
}

while (num > 0)
{
hex_digits[i] = num % 16;
num /= 16;
i++;
}
for (j = i - 1; j >= 0; j--)
{
if (hex_digits[j] < 10)
{
_sendchar(hex_digits[j] + '0');

}
else
_sendchar((k ? 'A' : 'a') + (hex_digits[j] - 10));
}
}
