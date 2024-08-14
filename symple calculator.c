
#include <stdio.h>

int main()
{
    int choice;
    int n1,n2,r;
    printf("simpe calculator\n 1.addition\n 2.subtraction\n 3.multiplication\n 4.divition\n");
    scanf("%d",&choice);
    
    printf("enter two number");
    scanf("%d %d",&n1,&n2);
    
    switch(choice){
    case 1:
    r=n1+n2;
    printf("result;%d+%d=%d\n",n1,n2,r);
    break;
    
    case 2:
    r=n1-n2;
    printf("result;%d-%d=%d\n",n1,n2,r);
    break;
    
    case 3:
    r=n1*n2;
    printf("result;%d*%d=%d\n",n1,n2,r);
    break;
    
    case 4:
    if(n2!=0)
    {
        r=n1/n2;
        printf("result:%d/%d=%d\n",n1,n2,r);
    }
    
    break;    
     default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");    
        
    }
    
    
    return 0;
}