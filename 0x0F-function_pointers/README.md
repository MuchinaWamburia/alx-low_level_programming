# 0x0f-Function_Pointers
Function pointers in C allow you to create variables that can store the address of a function. This enables you to dynamically select and call functions at runtime. Here's a brief overview:
1.	Declaration: Function pointers are declared similarly to regular function declarations, but with an additional (*) before the name. For example: int (*ptr)(int, int);
2.	Initialization: Function pointers can be assigned the address of a compatible function. For example: ptr = add;, where add is a function.
3.	Calling Function: You can use a function pointer to call the function it points to. For example: result = (*ptr)(a, b); or simply result = ptr(a, b);.
4.	Passing as Arguments: Function pointers can be passed as arguments to other functions, which allows for greater flexibility and modularity in code.
5.	Array of Function Pointers: You can create arrays of function pointers, where each element points to a different function.
6.	Callbacks: Function pointers are often used for callbacks. You can pass a pointer to a function as an argument to another function, allowing the called function to invoke the passed function at an appropriate time.
7.	Typedefs: Typedefs can be used to simplify the syntax of function pointers.
Example:
#include <stdio.h>
int add(int a, int b) {
return a + b;
}
int subtract(int a, int b) {
return a - b;
}
int main() {
int (*operation)(int, int); // Declare a function pointer
operation = add; // Point to the add function
printf("Result: %d\n", operation(5, 3)); // Call the pointed function

operation = subtract; // Point to the subtract function
printf("Result: %d\n", operation(10, 4)); // Call the pointed function

return 0;
}
Function pointers provide a way to implement dynamic behavior in your C programs, allowing for more flexible and modular designs.
