#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void swap_by_value(int x, int y);
void swap_by_reference(int *x, int *y);

int main(void)
{
    // Declare and initialize two integer variables
    int a = 10;
    int b = 3;

    // Variables are passed by value to functions, this means if we 
    // pass the a and b as variables to the function and swap the values within 
    // the swap_by_value function, the original variables will not be swapped.
    // This is because the variables in the functions are local variables,
    // they are created when we call the function then removed after the function 
    // returns. This is why we need to use pointers and pass the address of each
    // variable so in the function the original variables will be swapped.

    // Print variables original values
    printf ("Original: a= %i, b= %i\n", a, b);

    swap_by_value(a, b);

    // Print variables original values
    printf ("Swap by value: a= %i, b= %i\n", a, b);

    swap_by_reference(&a, &b);

    // Print swapped variables
    printf ("Swap by reference: a= %i, b= %i\n", a, b);

    return EXIT_SUCCESS;
}

void swap_by_value(int x, int y)
{
    // temp, x and y are local variables (local scope)
    // The values of a and b are copied into them
    int temp = x;
    x = y;
    y = temp;
}

void swap_by_reference(int *x, int *y)
{
    // temp is a local variable
    // x and y are addresses of a and b variables
    // when we dereference x and change its value we change the value of a
    // when we dereference y and change its value we change the value of b
    int temp = *x;
    *x = *y;
    *y = temp;
}