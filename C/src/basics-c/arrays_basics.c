
#include "arrays_basics.h"


void show_one_dimentional_arrays_basics(){

    // Declare an manipulate the array
    printf("Declare an manipulate the array");
     int arr[5] = {1,2,3,4,5};
     // Another way: int arr[] = {1,2,3,4,5};
    printf("The third item is: %d /n",arr[3]);
    printf("\n###############################\n");

    // Write to an array and read it:
     printf("Write to an array and read it");

    int arr2[5];
    int i;
    for( i=0; i< 5; i++)
    {
       arr2[i] = i * 3;
    }

    // Read an array:
    for(i =0; i< 5; i++)
    {
       printf("The %d item is: %d \n",i, arr2[i]);
    }
    printf("\n###############################\n");

    // Write to an array using scanf() and read it:
     printf("Write to an array using scanf and read it\n");
     int arr3[5];
     printf("Write down your ID number!\n");
     for(i=0;i<5;i++)
        scanf("%d", &arr3[i]);

    // Read an array:
    for(i =0; i< 5; i++)
    {
       printf("The %d item is: %d \n",i, arr3[i]);
    }
    printf("\n###############################\n");
}


void print_array(int *arr, int length)
{
    int i;
    for(i=0; i<length; ++i)
    {
        printf("%d ", arr[i]);
    }
}

int* Generate_array(int length)
{
    int *arr = (int *)malloc(length*sizeof(int));

    int i;
    for(i=0; i<length; ++i)
    {
        arr[i] = i*2;
    }
    return (arr);
}
