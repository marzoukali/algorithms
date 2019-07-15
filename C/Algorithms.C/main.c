#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("\n###############################\n");

    // Specific C environment and IDE stuff

    //  switch to C99 mode:
    // To switch to C99 mode in CodeBlocks, follow the next steps:
    // Click Project/Build options, then in tab Compiler Settings choose subtab Other options, and place -std=c99 in the text area, and click Ok.
    // This will turn C99 mode on for your Compiler.



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



    printf("\nPress ENTER key to Continue\n");
    getchar(); //  system("pause");
    return 0;
}
