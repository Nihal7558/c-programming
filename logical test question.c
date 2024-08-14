
#include <stdio.h>

int main()
{
int arr[100],n,i;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the element you need\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(arr[i]%2==0)
    printf("even number are %d\n",arr[i]);
}


	return 0;
}