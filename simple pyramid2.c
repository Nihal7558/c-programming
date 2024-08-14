
#include <stdio.h>

int main()
{
    int row,i,j,s;
    printf("enter the number of row you need");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    { 
    for(int s=0;s<row-i-1;s++)
    
        {
        printf(" ");
        }
        
    for(int j=0;j<i+1;j++)
    
        {
        printf("*");
        }
    
    for(int j=1;j<i+1;j++) 
        
        {
        printf("*");
        }
        printf("\n");
    }

    return 0;
}