#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints a specific string to the standard error
 * without using printf or puts functions
 * Return: 1
 */
int main(void)
{
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, 59);
return (1);
}
