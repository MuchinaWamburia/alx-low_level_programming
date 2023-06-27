#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line.
 * @s: pointer to string
 */

void print_rev(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}
for (length--; length >= 0; length--)
{
_putchar(*s[length]);
}
_putchar('\n');
}
