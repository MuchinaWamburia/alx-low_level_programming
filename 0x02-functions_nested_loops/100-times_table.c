#include "main.h"

/**
* print_number - helper function to print a number
* @num: the number to be printed
*/
void print_number(int num)
{
if (num < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(num + '0');
}
else if (num < 100)
{
_putchar(' ');
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}
else
{
_putchar(num / 100 + '0');
_putchar((num / 10) % 10 + '0');
_putchar(num % 10 + '0');
}
}

/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int row, column, product;

for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = column * row;

if (column != 0)
{
_putchar(',');
_putchar(' ');
}

print_number(product);
}

_putchar('\n');
}
}
}
