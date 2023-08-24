#include "main.h"
/**
* print_binary - prints the binary represantion of nput namba
* @num: input
* Return: returns void
*/
void print_binary(unsigned int num)
{
int i = 0, j, binary_nambas[32];

if (num == 0)
{
_sendchar('0');
return;
}
while (num > 0)
{
binary_nambas[i] = num % 2;
num /= 2;
i++;
}
for (j = i - 1; j >= 0; j--)
{
_sendchar('0' + binary_nambas[j]);
}
return;
}
