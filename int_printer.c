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

if (num == 0)
{
_sendchar('0');
return;
}
if (num < 0)
{
_sendchar('-');

if (num == INT_MIN)
{
_sendchar('2');
num = 147483648;
}
else
{
num = -num;
}
}
 vdigits = integers_count(num, 10);
if (vdigits == 0)
return;
vdivisor = 1;

for (i = 1; i < vdigits; i++)
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
