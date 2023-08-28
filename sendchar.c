#include "main.h"
/**
* _sendchar - prints a character
* @c: input char
* Return: returns bytes
*/
int _sendchar(char c)
{
return (write(1, &c, 1));
}
