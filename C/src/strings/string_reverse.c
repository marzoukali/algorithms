#include "string_reverse.h"

void reverseRecursion(const char *str){
   if (!*str)
    return;
  reverseRecursion(str + 1);
  putchar(*str);
}

void reverseIteration(const char *str){

    int arrSize = strlen(str);
    char *strTemp;
    int i;
    for(i = arrSize; i > 0; i--)
    {
        putchar(str[i]);
    }
}

void reverseStack(const char *str){

}

void reverseDivideConquerRecursion(const char *str){

}

void reverseDivideConquerIterator(const char *str){

}

void reverseDivideConquerIteratorWithTwoPointers(const char *str){

}


