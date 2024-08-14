
#include <stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
                          }
        
        void sum (int num1,int num2)
{
    int result;
    result=num1+num2;
    printf("result is %d",result);
                                     }
