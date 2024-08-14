
#include <stdio.h>

int main()
{
    int i,j,temp;
    int a[15]={76,58,85,34,52,54,75,67,85,585,756,575,565,579,574};
    for (i=0;i<15;i++)
    {
        for (j=i+1;j<15;j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
                printf("printing sorted element list ...");
                for (i=0;i<15;i++)
                {
                    printf("%d\n",a[i]);
                }
            
        
    
    

    
}