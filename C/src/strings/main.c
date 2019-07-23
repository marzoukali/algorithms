#include <stdio.h>
#include <stdlib.h>
#include "string_reverse.h"

int main()
{
    printf("Hello world!\n");

    printf("\n #####String Reverse##### \n");

    char  *arr = "Hello Babe!";

    // Recursion
     reverseRecursion(arr);

    // Iterative.
    reverseIteration(arr);


    // Much better to do it divide and conquer so we will not take any space.


    printf("\nEnd\n");
    return 0;
}
