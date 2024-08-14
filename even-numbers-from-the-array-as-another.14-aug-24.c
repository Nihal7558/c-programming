
#include <stdio.h>

int main()
{
    int arr[100],evenarr[100],n,k=0,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("\nenter the element :");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
        
    }
       
    
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            evenarr[k]=arr[i];
            k++;
        }
    }
    printf("even number\n");
    for(i=0;i<k;i++)
    {
        printf("\n%d",evenarr[i]);
    }
    printf("\n");
    
    return 0;
}