#include "main.h"

/**
* print_number - prints a number
* @num: the number to be printed
*/
void print_number(int num)
{
if (num < 10)
{
_putchar(num + '0');
}
else
{
print_number(num / 10);
_putchar((num % 10) + '0');
}
}

/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
int row, column, product;

if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = column * row;

if (column > 0)
{
_putchar(',');
_putchar(' ');
}

if (product <= 9)
{
_putchar(' ');
_putchar(' ');
print_number(product);
}
else if (product >= 10 && product < 100)
{
_putchar(' ');
print_number(product);
}
else if (product >= 100)
{
print_number(product);
}
}
_putchar('\n');
}
}
}
