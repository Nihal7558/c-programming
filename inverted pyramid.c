
#include <stdio.h>

int main()
{
    int row ,i,j,s;
    printf("enter the number of row you need");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<2*i+1;j++)
        {
        printf(" ");
        }
        for(int s=0;s<2*(row-i)-1;s++)
        {
        printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}