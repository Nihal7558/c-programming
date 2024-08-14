
#include <stdio.h>

int main()
{
    int n,i,l;
    printf("which multiplitcation table you need");
    scanf("%d",&n);
    printf("enter limit you need");
    scanf("%d",&l);
for (i=1;i<=l;i++)
{
    printf("%d*%d=%d \n",n,i,i*n);
}
    return 0;
}