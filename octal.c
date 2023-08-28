#include "main.h"
/**
* print_octal - prints octal format of number
* @num: input
* Return: returns void
*/
void print_octal(unsigned int num)
{
int i = 0, j, octal_digits[32];

if (num == 0)
{
_sendchar('0');
return;
}
while (num > 0)
{
octal_digits[i] = num % 8;
num /= 8;
i++;
}
for (j = i - 1; j >= 0; j--)
{
_sendchar(octal_digits[j] + '0');
}
}
