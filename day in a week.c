/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int week;
    printf("enter a week number (1-7)");
    scanf("%d",&week);
    switch(week)
    
    {
         case 1:
         printf("monday");
         break;
         case 2:
         printf("tuesday");
         break;
         case 3:
         printf("wednesday");
         break;
         case 4:
         printf("thursday");
         break;
         case 5:
         printf("friday");
         break;
         case 6:
         printf("saturday");
         break;
         case 7:
         printf("sunday");
         break;
         default:
         printf("invalid input! please enter week number between(1-7) ");
    }
         return 0;
        
}
    