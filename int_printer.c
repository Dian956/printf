#include "main.h"
/**
* int_print - prints integers
* @num: input integer
* Return: returns void
*
*/
void int_print(int num)
{
int i, vdivisor, vdigit, vdigits;

if (num < 0)
{
_sendchar('-');
num = -num;
}

vdigits = integers_count(num);
vdivisor = 1;

for (i = 0; i < vdigits; i++)
{
vdivisor *= 10;
}

while (vdivisor != 0)
{
vdigit = num / vdivisor;
_sendchar('0' + vdigit);
num %= vdivisor;
vdivisor /= 10;
}
return;
}
