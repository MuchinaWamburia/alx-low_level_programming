#include <stddef.h>

/**
* int_index - searches for an integer
* @array: pointer to the array
* @size: number of elements in the array
* @cmp: pointer to the function used to compare values
*
* Return: index of the first element for which cmp does not return 0,
*         or -1 if no element matches or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp)
{
for (int i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
