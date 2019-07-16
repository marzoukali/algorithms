#include "structures-basics.h"

struct address
{
   char name[50];
   char street[100];
   char city[50];
   char state[20];
   int pin;
};

/*
struct Point
{
   int x = 0;  // COMPILER ERROR:  cannot initialize members here
   int y = 0;  // COMPILER ERROR:  cannot initialize members here
};
*/

void show_Structures_basics(){

// A variable declaration with structure declaration.
struct Point
{
   int x, y;
} p1;  // The variable p1 is declared with 'Point'


struct Point p2 = {1,2};  // The variable p2 is declared like a normal variable and initialized

printf("%d",p2.x);

}
