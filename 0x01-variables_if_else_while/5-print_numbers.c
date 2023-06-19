#include <stdio.h>
/**
 * main - start of program
 * Description: Prints all single-digit numbers of base 10
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
putchar('\n');
return (0);
}
