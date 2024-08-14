
#include <stdio.h>

int main()
{
    char s[11]="javatpoint";
    int i=0; 
    int count=0;
    while(i<11)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
       count++;
    }
        i++;
    }
     printf("the number of vowels %d",count);

    return 0;
}