#include <stdio.h>

/**
 * main - Entry point of the progra
 * Description: Prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
int num1 = 0;
int num2;
while (num1 < 9)
{
num2 = num1 + 1;
while (num2 <= 9)
putchar(num1 + '0');
putchar(num2 + '0');
if (num1 < 8 || num2 < 9)
{
putchar(',');
putchar(' ');
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
