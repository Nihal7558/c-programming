
#include <stdio.h>

int main()
{
    int row,i,j;
    printf("enter the number of row");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i+1;j++)
        printf("%d", j+1);
        printf("\n");
    }
    return 0;
}