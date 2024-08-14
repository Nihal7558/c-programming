
#include <stdio.h>

int main()
{
    int row,i,j,s;
    printf("enter the number of rows ");
    scanf("%d",&row);
    for(int i=0;i<row;i++){
        for(int j=0;j<2*(row - i)-1;j++)  /*The formula  [ 2 * (rows - i) - 1 ] calculate the  
                                          correct number of spaces for each row.*/
      { 
        printf(" ");
    }
    for (int s=0;s<2*i+1;s++) /*The formula ( 2 * i + 1) calculates the 
                           correct number of stars for each row.*/
    
    {
        printf("* ");
        
    }
        
        printf("\n");
    }
    
    return 0;
}