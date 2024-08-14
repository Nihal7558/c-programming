
#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[25]={'m','u','h','a','m','m','a','d','n','i','h','a','l','\0'};
    char ch2[25];
    strcpy(ch2,ch1);
    printf("the string is : %s",ch2);

    return 0;
}