#include <stdio.h>
#include <stdlib.h>
#include "arrays_basics.h"
#include "structures-basics.h"

int main()
{
    printf("Hello world!\n");
    printf("\n############Arrays###################\n");

    show_one_dimentional_arrays_basics();
    int* arr = Generate_array(5);
    print_array(arr, 5);
    free(arr);

    printf("\n############Structures###################\n");

    show_Structures_basics();

    printf("\nPress ENTER key to Continue\n");
    getchar(); //  system("pause");
    return 0;
}
