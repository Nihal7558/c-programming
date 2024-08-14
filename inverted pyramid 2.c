#include <stdio.h>

int main()
{
    int row, i, j, s;
    printf("Enter the number of rows you need: ");
    scanf("%d", &row);
    
    for (i = row; i > 0; i--)
    { 
        for (s = 0; s < row - i; s++)
        {
            printf(" ");
        }
        
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        
        for (j = 0; j < i - 1; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
