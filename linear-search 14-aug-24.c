
#include <stdio.h>

int main()
{
    int arr[] = {1,21,32,101,11,10,20};
    int k=10;
    int n=sizeof(arr);
    int i,f;
    for(i=1;i<n;i++)
    {
        if(arr[i]==k)
        
        {
            printf("element %d is found in %d position\n",k,i);
            f=1;
        }
    }
    if(f==0){
    
        printf("the element not found\n");
    }
    
        return 0;
}
