0x10. C - Variadic Functions 

In C programming, a variadic function is a function that can accept a variable number of arguments. This feature allows you to create functions that can work with different numbers of input values. Variadic functions are often used in situations where the number of arguments is not known in advance or can vary.

How variadic functions are defined and used:
1.	Definition: A variadic function is defined using the ellipsis ... in the parameter list. The ellipsis represents a variable number of arguments.

#include <stdio.h>
#include <stdarg.h>  // Required for variadic functions

int sum(int count, ...) {
    int result = 0;

    va_list args;  // Variable to hold the arguments
    va_start(args, count);  // Initialize the argument list

    for (int i = 0; i < count; i++) {
        result += va_arg(args, int);  // Access the arguments using va_arg
    }

    va_end(args);  // Clean up the argument list
    return result;
}

2.	Usage: To use a variadic function, you provide the number of arguments and then pass the arguments themselves.

int main() {
    printf("Sum: %d\n", sum(3, 10, 20, 30));  // Output: Sum: 60
    printf("Sum: %d\n", sum(5, 2, 4, 6, 8, 10));  // Output: Sum: 30
    return 0;
}
Variadic functions rely on the <stdarg.h> header, which provides macros like va_list, va_start, va_arg, and va_end for working with the variable arguments  
Variadic functions require the caller to provide some way of determining the number and types of arguments. Common examples of variadic functions in the C standard library are printf() and scanf(), which can handle a variable number of format specifiers and arguments.
Variadic functions can be error-prone if not used carefully, as there is no built-in way for the function to know the actual types or number of arguments passed. It's up to the programmer to ensure that the arguments provided match the expected types and number.

