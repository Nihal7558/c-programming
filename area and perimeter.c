#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the length of rectangle:");
    scanf("%d",&a);
    printf("Enter the width of rectangle:");
    scanf("%d",&b);
    printf("The area of rectangle is %d \n",a*b);
    printf("The perimeter of rectangle is %d",2*(a+b));

    return 0;
}