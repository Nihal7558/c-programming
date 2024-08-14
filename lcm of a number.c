/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,lcm,fact =1;
    printf("enter to nunber\n");
    scanf("%d%d",&num1,&num2);
    lcm=(num1>num2)? num1 : num2;
    while(fact)
    {
        if (lcm%num1 ==0 && lcm%num2 ==0)
        {
            printf ("lcm of %d and %d is %d\n",num1,num2,lcm);
            fact = 0;
            
        }
        lcm ++;
    }

    return 0;
}